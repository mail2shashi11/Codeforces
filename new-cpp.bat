@echo off
REM Create a new C++ solution from template and an accompanying notes file.
REM Usage: new-cpp.bat ProblemName
if "%~1"=="" (
  echo Usage: %~nx0 ProblemName
  exit /b 1
)
set NAME=%~1
set TEMPLATE=templates\cpp.cpp
set TARGET=solutions\cpp\%NAME%.cpp
set NOTE=docs\%NAME%_NOTES.md
if exist "%TARGET%" (
  echo File already exists: %TARGET%
  exit /b 1
)
if not exist "templates" (
  echo Templates folder not found.
) else (
  copy /Y "%TEMPLATE%" "%TARGET%" >nul
  echo Created %TARGET%
)
if not exist "docs" mkdir "docs"
echo # %NAME% Notes > "%NOTE%"
echo Created notes: %NOTE%
