set QACPRJPATH=%WORKSPACE%\qac\%JOB_BASE_NAME%.prj
set QACPERSONPATH=%WORKSPACE%\qac\person

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
