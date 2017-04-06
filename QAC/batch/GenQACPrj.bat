set QACSRCPATH=%WORKSPACE%\SRC
set QACPRJPATH=%WORKSPACE%\qac\%JOB_BASE_NAME%.prj
set QACPERSONPATH=%WORKSPACE%\qac\person

REM download the code to be tested from the main repository into src
mkdir %QACSRCPATH%
cd %QACSRCPATH%
git init
git pull https://github.com/zhengzhang143/hello_world master:master --allow-unrelated-histories
echo VersionTag45>"%QACPRJPATH%"
echo ProjectDataflowFile=%QACPERSONPATH%\%JOB_BASE_NAME%.p_d>>"%QACPRJPATH%"
echo StartProjectMarker>>"%QACPRJPATH%"
echo FolderName=%JOB_BASE_NAME%>>"%QACPRJPATH%"
echo SourcePath=%WORKSPACE%\src>>"%QACPRJPATH%"
echo OutputPath=%WORKSPACE%\qac\output>>"%QACPRJPATH%"
echo SubsPers=%QACPERSONPATH%\%JOB_BASE_NAME%.p_s>>"%QACPRJPATH%"
echo AnalPers=%QACPERSONPATH%\%JOB_BASE_NAME%.p_a>>"%QACPRJPATH%"
echo CompPers=%QACPERSONPATH%\%JOB_BASE_NAME%.p_c>>"%QACPRJPATH%"
for /r "%WORKSPACE%\src" %%i in (*.c) do (echo %%i>>"%QACPRJPATH%")
echo EndContainedFilesMarker>>"%QACPRJPATH%"
