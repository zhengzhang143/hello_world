REM 1. Config
call Config.bat

REM 2. SVN Import Project
if %GITJOB% equ P set/p GITJOB=�Ƿ��ϴ�tessy��qac���õ�git(Y or N):    
if %GITJOB% equ Y call GIT\GITImport.bat

REM 3. Create QAC Job
if %QACJOB% equ P set/p QACJOB=�Ƿ񴴽�QAC JOB(Y or N):    
if %QACJOB% equ Y call QAC\CreateQACJob.bat

REM 4. Create TESSYJOB Job
if %TESSYJOB% equ P set/p TESSYJOB=�Ƿ񴴽�TESSY JOB(Y or N):    
if %TESSYJOB% equ Y call TESSY\CreateTESSYJob.bat
