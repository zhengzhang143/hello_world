REM 1. Should Be Setted Every Time
REM Set Name of the Project
set PRJNAME=TEST8

REM Submit Settings Or Not : Y|N
set PRJSUBMIT=Y

REM Submit Project Source Files Or Not : Y|N
set PRJSRCSUB=Y

REM Set Local Path of the Project Source Files, Valid When %PRJSRCSUB% is Y
set PRJSRCLOCAL=%~dp0%SRC

REM set GIT baseRepository of the Project Source Files
set PRJSRCGIT=https://github.com/zhengzhang143/hello_world

REM set GIT destination path
set PRJSRCDESPATH=jenkins_%PRJNAME%

REM set GIT baseBranch of the Project Source Files
set PRJSRCGITBRANCH=master

REM Set SVN Path of the Project Source Files, Valid When %PRJSRCSUB% is N
REM set PRJSRCSVN=svn://localhost/test/src
set PRJSRCSVN=https://zhengzhang1L.hirain.com/svn/jenkinssvnpath/src

REM Set SVN Root Path of the Project to Import
REM set PRJSVNPATH=svn://localhost/%PRJNAME%
set PRJSVNPATH=https://zhengzhang1L.hirain.com/svn/jenkinssvnpath/%PRJNAME%

REM Set Path of QAC Personalities
set QACMESSAGEP=%~dp0%QAC\person\m3cmex.p_s
set QACANALYZERP=%~dp0%QAC\person\m3cmex.p_a
set QACCOMPILERP=%~dp0%QAC\person\m3cmex.p_c
set QACDATAFLOWP=%~dp0%QAC\person\m3cmex.p_d

REM Set Path of QAC Config File (from QAVerify-2.0.1\defaultconfigs\)
set QACCONFIGFILE=%~dp0%QAC\config\QAC-81-config.xml

REM Set Tessy Batch File (TBS File)
set TESSYTBSFILE=%~dp0%TESSY\config\test_jenkins.tbs

REM Set Tessy Project File
set TESSYPDBXFILE=%~dp0%TESSY\tessy.pdbx

REM Set Tessy Config Path
set TESSYCONFIGPATH=%~dp0%\TESSY\config

REM Set Tessy Case Path (TMB Path)
set TESSYTMBPATH=%~dp0%TESSY\case

REM Set Project Recipient List Separated by Comma
set PRJRECIPIENTS=zheng.zhang1@hirain.com

REM Whether to Select The Job to Create, Yes or No or Prompt: Y|N|P
set GITJOB=P
set QACJOB=P
set TESSYJOB=P



REM 2. Should Be Setted According To The Local Machine
REM Set Path of JAVA
set JENKINSJAVAPATH=D:\jenkins\jre\bin\java

REM Set Path of jenkins-cli.jar
set JENKINSCLIPATH=%~dp0%jenkins-cli.jar

REM Set URL of Jenkins
set JENKINSURL=http://localhost:8080/

REM Set UserName of Jenkins
set JENKINSUSER=zheng.zhang1

REM Set Password of Jenkins
set JENKINSPASS=Aa04619910728


REM 3. Can Use The Default Settings
REM Set Path of SED Folder
set SEDLOCALPATH=%~dp0%SED

REM Set Path of QAC Folder
set QACLOCALPATH=%~dp0%QAC

REM Set Path of TESSY Folder
set TESSYLOCALPATH=%~dp0%TESSY

REM Set Job Name of QAC
set QACJOBNAME=%PRJNAME%_QAC

REM Set Job Name of TESSY
set TESSYJOBNAME=%PRJNAME%_TESSY