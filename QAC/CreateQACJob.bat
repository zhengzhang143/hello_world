REM 1. Modify The Config File
if %PRJSRCSUB% equ Y set PRJSRCSVN=%PRJSVNPATH%/src
"%SEDLOCALPATH%\sed" -r "s#<url></url>#<url>%gitrepositorypath%PRJSRCGIT</url>#" "%QACLOCALPATH%\config.xml" | "%SEDLOCALPATH%\sed" -r "s#<name>*/branchname</name>#<name>*/%PRJSRCGITBRANCH%</name>#" | "%SEDLOCALPATH%\sed" -r "s#<projectFile>.*</projectFile>#<projectFile>qac\\%QACJOBNAME%.prj</projectFile>#" | "%SEDLOCALPATH%\sed" -r "s#<qaVerifyProjectName>qavprjname</qaVerifyProjectName>#<qaVerifyProjectName>%QACJOBNAME%</qaVerifyProjectName>#" | "%SEDLOCALPATH%\sed" -r "s#<recipientList>.*</recipientList>#<recipientList>%PRJRECIPIENTS%</recipientList>#" > "%QACLOCALPATH%\%QACJOBNAME%.xml"

REM 2. Create QAC Job
"%JENKINSJAVAPATH%" -jar "%JENKINSCLIPATH%" -s %JENKINSURL% create-job %QACJOBNAME% --username %JENKINSUSER% --password %JENKINSPASS% < "%QACLOCALPATH%\%QACJOBNAME%.xml"