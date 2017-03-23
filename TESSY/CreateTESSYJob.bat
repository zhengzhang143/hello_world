REM 1. Modify The Config File
if %PRJSRCSUB% equ Y set PRJSRCSVN=%PRJSVNPATH%/src
"%SEDLOCALPATH%\sed" -r "s#<remote>svnsrcpath</remote>#<remote>%PRJSRCSVN%</remote>#" "%TESSYLOCALPATH%\config.xml" | "%SEDLOCALPATH%\sed" -r "s#<remote>svntessypath</remote>#<remote>%PRJSVNPATH%/tessy</remote>#" | "%SEDLOCALPATH%\sed" -r "s#<recipientList>.*</recipientList>#<recipientList>%PRJRECIPIENTS%</recipientList>#" > "%TESSYLOCALPATH%\%TESSYJOBNAME%.xml"

REM 2. Create TESSY Job
"%JENKINSJAVAPATH%" -jar "%JENKINSCLIPATH%" -s %JENKINSURL% create-job %TESSYJOBNAME% --username %JENKINSUSER% --password %JENKINSPASS% < "%TESSYLOCALPATH%\%TESSYJOBNAME%.xml"