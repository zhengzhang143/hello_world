REM 1. Import Project Src Files
rem if %PRJSRCSUB% equ Y (set PRJSRCSVN=%PRJSVNPATH%/src)
rem if %PRJSRCSUB% equ Y (svn import "%PRJSRCLOCAL%" "%PRJSRCSVN%" --message "import by jenkins script")

if %PRJSUBMIT% equ Y (
	rem set ROOTPATH=%cd%/..
	rem cd %ROOTPATH%
	git init 
	git branch %PRJDESBRANCH%
	git checkout %PRJDESBRANCH%
	REM git remote add origin %PRJSRCGIT%
	git add .
	git commit -m "added by jenkins script"
	git push %PRJSRCGIT% %PRJDESBRANCH% -f
)
