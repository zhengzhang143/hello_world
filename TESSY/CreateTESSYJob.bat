REM 1. Modify The Config File
if %PRJSRCSUB% equ Y set PRJSRCSVN=%PRJSVNPATH%/src
"%SEDLOCALPATH%\sed" -r "s#<url>PRJSRCGIT</url>#<url>%PRJSRCGIT%</url>#" "%TESSYLOCALPATH%\config.xml" | "%SEDLOCALPATH%\sed" -r "s#<name>master</name>#<name>*/%PRJDESBRANCH%</name>#" | "%SEDLOCALPATH%\sed" -r "s#<recipientList>.*</recipientList>#<recipientList>%PRJRECIPIENTS%</recipientList>#" > "%TESSYLOCALPATH%\%TESSYJOBNAME%.xml"
%SEDLOCALPATH%\sed -r "s#sourcebranch#%PRJSRCGITBRANCH%#" "%TESSYLOCALPATH%\batch\config.bat" | %SEDLOCALPATH%\sed -r "s#origin#%PRJSRCGIT%#" > "%TESSYLOCALPATH%\batch\tessy.bat"
REM 2. Create TESSY Job
"%JENKINSJAVAPATH%" -jar "%JENKINSCLIPATH%" -s %JENKINSURL% create-job %TESSYJOBNAME% --username %JENKINSUSER% --password %JENKINSPASS% < "%TESSYLOCALPATH%\%TESSYJOBNAME%.xml"