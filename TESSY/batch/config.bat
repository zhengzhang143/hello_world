@echo off
rem ==========================================================================
rem
rem (c) Razorcat Development GmbH, 2014
rem
rem Batch file for creation of a new TESSY test collection containing some
rem example modules.
rem
rem ==========================================================================

rem Adjust PATH, if necessary
rem 为了脚本的通用性，此处不更改path，请在TESSY部署机器上更改环境变量
rem --------------------------
set TESSY_WAS_RUNNING=0

cd /d %~dp0
echo open current path:"%cd%"

rem Starting TESSY headless if not already runningF
rem -----------------------------------------------
echo Starting TESSY (headless)
rem create tessy project directories
mkdir ..\backup 2^>nul
mkdir ..\log 2^>nul
mkdir ..\persist 2^>nul
mkdir ..\work 2^>nul
rem assign distinct Id and Name to tessy project
set SEDLOCALPATH=..\..\SED
%SEDLOCALPATH%\sed -r "s#identifier=\"identifier\"#identifier=\"%JOB_BASE_NAME%_%BUILD_NUMBER%_%time%\"#" "..\tessy.xml" | "%SEDLOCALPATH%\sed" -r "s#name=\"tessyprojectname\"#name=\"%JOB_BASE_NAME%_%BUILD_NUMBER%_%time%\"#" > "..\tessy.pdbx"
rem start tessy
tessyd -f %cd%\..\tessy.pdbx
if %ERRORLEVEL%==0 goto next0
	echo -- TESSY with GUI is running
	set TESSY_WAS_RUNNING=1
:next0


rem Connect to running TESSY instance
rem ----------------------------------
echo Connecting to TESSY
tessycmd connect
if %ERRORLEVEL%==0 goto next1
	rem try disconnect
	tessycmd disconnect
	if NOT %ERRORLEVEL%==0 goto exit
	tessycmd connect
	if %ERRORLEVEL%==0 goto next1
	echo Error connecting to TESSY application
	exit /b
:next1


rem Select current project and create new test collection
rem ------------------------------------------------------
echo Selecting current project
for /f "tokens=*" %%a in ('tessycmd list-projects') do set PROJECT="%%a"
echo Selecting %PROJECT%
tessycmd select-project %PROJECT%
if NOT %ERRORLEVEL%==0 goto exit

echo downloading the code to be tested from the main repository into src
set QACSRCPATH=%WORKSPACE%\SRC
cd %QACSRCPATH%
git init
git pull origin master:sourcebranch --allow-unrelated-histories

echo Selecting test collection
tessycmd select-test-collection "Jenkins"
if %ERRORLEVEL%==0 goto next2	
	rem Create new test collection
	echo -- Not available, creating new test collection
	tessycmd new-test-collection "Jenkins"
	if NOT %ERRORLEVEL%==0 goto exit
:next2

echo Selecting test folder
tessycmd select-folder -c "Jenkins_Type"
if %ERRORLEVEL%==0 goto TMB	
	rem Create new test collection
	echo Creating new folder "Jenkins_Type" on test collection level
	tessycmd new-folder -c "Jenkins_Type"
if NOT %ERRORLEVEL%==0 goto exit

:TMB
rem Loop over TMB files and import them
rem ------------------------------------
echo Loop over TMB files and import them
for %%f in (..\case\*.tmb) do (
	echo Importing "%%f"
	tessycmd restore-module "%cd%\%%f"
	if NOT %ERRORLEVEL%==0 goto exit
)

rem Update source paths within modules
rem ------------------------------------
echo Listing all source files
set CTotalFile=CTotal.txt
cd.>%CTotalFile%
for /r "..\..\src" %%i in (*.c) do (echo %%i>>%CTotalFile%)

echo Listing all include dirs
set HTotalFile=HTotal.txt
dir /ad /b /s "%cd%\..\..\src" > %HTotalFile%
set CInputFile=CInput.txt
set HInputFile=HInput.txt
for /f "tokens=*" %%a in ('tessycmd list-modules') do (
	echo select-module %%a
	tessycmd select-module "%%a"
	if NOT %ERRORLEVEL%==0 goto exit

	echo Listing current source files
	
	tessycmd list-source-files > %CInputFile%

	echo Listing current include dirs
	
	tessycmd list-include-dirs > %HInputFile%

	echo Updating module source files and include dirs
	ModifySrcPath

	tessycmd remove-source-file -all
	if NOT %ERRORLEVEL%==0 goto exit

	tessycmd remove-include-dir -all
	if NOT %ERRORLEVEL%==0 goto exit

	tessycmd add-include-dir "%cd%\..\..\src"
	if NOT %ERRORLEVEL%==0 goto exit

	call AddSrcPath.bat
)

rem Update attribute within module
rem ------------------------------------
copy ..\config\jenkins.tbs jenkins.txt

rem 设置报告生成路径
set word=%cd%
set ofile=%word%\jenkins.txt
set ofile1=%word%\jenkins_tmp.txt
setlocal enabledelayedexpansion
for /f "delims=" %%a in ('findstr .* %ofile%') do (
	set string=%%a
	set "string=!string:$(JENKINS_WORK)=%word%!"
	echo !string!>>%ofile1%
)
del jenkins.txt
ren jenkins_tmp.txt jenkins.tbs

rem Run the tests
rem --------------
echo Running the tests ...
tessycmd -animate exec-test "%cd%\jenkins.tbs"

rem Disconnect from TESSY
rem ----------------------
tessycmd disconnect


rem Shutdown TESSY headless
rem ------------------------
if %TESSY_WAS_RUNNING%==1 goto next3
	echo Shutting down TESSY headless
	tessyd shutdown
:next3


rem
rem Normal completion
rem ------------------
rem
	echo Successful completion!
	pause
	exit /b

rem
rem Error handling
rem ---------------
rem
:exit
	echo Error executing command
	tessycmd disconnect
	tessyd shutdown
	pause
	exit /b
