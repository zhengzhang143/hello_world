REM 1. Modify The Config File
if %PRJSRCSUB% equ Y set PRJSRCSVN=%PRJSVNPATH%/src
"%SEDLOCALPATH%\sed" -r "s#<url>PRJSRCGIT</url>#<url>%PRJSRCGIT%</url>#" "%QACLOCALPATH%\config.xml" | "%SEDLOCALPATH%\sed" -r "s#<name>master</name>#<name>*/%PRJDESBRANCH%</name>#" | "%SEDLOCALPATH%\sed" -r "s#<projectFile>.*</projectFile>#<projectFile>qac\\%QACJOBNAME%.prj</projectFile>#" | "%SEDLOCALPATH%\sed" -r "s#<qaVerifyProjectName>qavprjname</qaVerifyProjectName>#<qaVerifyProjectName>%QACJOBNAME%</qaVerifyProjectName>#" | "%SEDLOCALPATH%\sed" -r "s#<recipientList>.*</recipientList>#<recipientList>%PRJRECIPIENTS%</recipientList>#" > "%QACLOCALPATH%\%QACJOBNAME%.xml"
%SEDLOCALPATH%\sed -r "s#SOURCEBRANCH=sourcebranch#SOURCEBRANCH=%PRJDESBRANCH%#" "%QACLOCALPATH%\batch\config.bat" | %SEDLOCALPATH%\sed -r "s#origin#%PRJSRCGIT%#" > "%QACLOCALPATH%\batch\GenQACPrj.bat"

REM 2. Create QAC Job
"%JENKINSJAVAPATH%" -jar "%JENKINSCLIPATH%" -s %JENKINSURL% create-job %QACJOBNAME% --username %JENKINSUSER% --password %JENKINSPASS% < "%QACLOCALPATH%\%QACJOBNAME%.xml"

REM 3. specify new names for QAC config files
copy %QACLOCALPATH%\person\m3cmex.p_a %QACLOCALPATH%\person\%QACJOBNAME%.p_a
copy %QACLOCALPATH%\person\m3cmex.p_c %QACLOCALPATH%\person\%QACJOBNAME%.p_c
copy %QACLOCALPATH%\person\m3cmex.p_d %QACLOCALPATH%\person\%QACJOBNAME%.p_d
copy %QACLOCALPATH%\person\m3cmex.p_s %QACLOCALPATH%\person\%QACJOBNAME%.p_s