REM 1. Import Project Src Files
if %PRJSRCSUB% equ Y (set PRJSRCSVN=%PRJSVNPATH%/src)
if %PRJSRCSUB% equ Y (svn import "%PRJSRCLOCAL%" "%PRJSRCSVN%" --message "import by jenkins script")

if %PRJSUBMIT% equ Y (
	set ROOTPATH=%cd%/..
	cd %ROOTPATH%
	git init 
	git remote add origin %PRJSRCGIT%
	git add .
	git commit -m "added by jenkins script"
	git branch %PRJDESBRANCH%
	git push origin %PRJDESBRANCH% -f
)
