REM 1. Config
call Config.bat

REM 2. SVN Import Project
REM if %SVNJOB% equ P set/p SVNJOB=是否上传tessy和qac配置到git(Y or N):    
REM if %SVNJOB% equ Y call SVN\SVNImport.bat

REM 3. Create QAC Job
if %QACJOB% equ P set/p QACJOB=是否创建QAC JOB(Y or N):    
if %QACJOB% equ Y call QAC\CreateQACJob.bat

REM 4. Create TESSYJOB Job
if %TESSYJOB% equ P set/p TESSYJOB=是否创建TESSY JOB(Y or N):    
if %TESSYJOB% equ Y call TESSY\CreateTESSYJob.bat
