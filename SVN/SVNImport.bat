REM 1. Import Project Src Files
if %PRJSRCSUB% equ Y (set PRJSRCSVN=%PRJSVNPATH%/src)
if %PRJSRCSUB% equ Y (svn import "%PRJSRCLOCAL%" "%PRJSRCSVN%" --message "import by jenkins script")

REM 2. Import QAC Personalities
set QACSVNPATH=%PRJSVNPATH%/qac
set QACPERSONSVNPATH=%QACSVNPATH%/person
svn import "%QACMESSAGEP%" "%QACPERSONSVNPATH%/%QACJOBNAME%.p_s" --message "import by jenkins script"
svn import "%QACANALYZERP%" "%QACPERSONSVNPATH%/%QACJOBNAME%.p_a" --message "import by jenkins script"
svn import "%QACCOMPILERP%" "%QACPERSONSVNPATH%/%QACJOBNAME%.p_c" --message "import by jenkins script"
svn import "%QACDATAFLOWP%" "%QACPERSONSVNPATH%/%QACJOBNAME%.p_d" --message "import by jenkins script"

REM 3. Import GenQACPrj.bat
set QACBATCHSVNPATH=%QACSVNPATH%/batch
svn import "%QACLOCALPATH%\batch\GenQACPrj.bat" "%QACBATCHSVNPATH%/GenQACPrj.bat" --message "import by jenkins script"

REM 4. Import QAC-81-Config.xml
set QACCONFIGSVNPATH=%QACSVNPATH%/config
svn import "%QACCONFIGFILE%" "%QACCONFIGSVNPATH%/QAC-Config.xml" --message "import by jenkins script"

REM 5. Import Tessy (Optimize in the future)
set TESSYSVNPATH=%PRJSVNPATH%/tessy
svn import "%TESSYLOCALPATH%\batch\tessy.bat" "%TESSYSVNPATH%/batch/tessy.bat" --message "import by jenkins script"
svn import "%TESSYLOCALPATH%\batch\ModifySrcPath.exe" "%TESSYSVNPATH%/batch/ModifySrcPath.exe" --message "import by jenkins script"
svn import "%TESSYLOCALPATH%\config" "%TESSYSVNPATH%/config" --message "import by jenkins script"
svn import "%TESSYLOCALPATH%\tessy.pdbx" "%TESSYSVNPATH%/tessy.pdbx" --message "import by jenkins script"
svn import "%TESSYTBSFILE%" "%TESSYSVNPATH%/config/jenkins.tbs" --message "import by jenkins script"
svn import "%TESSYTMBPATH%" "%TESSYSVNPATH%/case" --message "import by jenkins script"
