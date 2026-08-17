@echo off
REM Runner: compile & run a solution by problem name (without extension).
REM Usage: run.bat ProblemName  (redirection works: run.bat ProblemName < input.txt)
setlocal enabledelayedexpansion
if "%~1"=="" (
  echo Usage: %~nx0 ProblemName
  exit /b 1
)
set NAME=%~1
set CPP=solutions\cpp\%NAME%.cpp
set JAVA=solutions\java\%NAME%.java
set BUILD_DIR=.build
if not exist "%BUILD_DIR%" mkdir "%BUILD_DIR%"
if exist "%CPP%" (
  echo Compiling %CPP%...
  g++ -std=c++17 "%CPP%" -O2 -pipe -static -s -o "%BUILD_DIR%\%NAME%.exe" 2>nul
  if errorlevel 1 (
    echo Compilation failed or g++ not available. Trying without -static and -s...
    g++ -std=c++17 "%CPP%" -O2 -pipe -o "%BUILD_DIR%\%NAME%.exe" || (
      echo Compilation failed. Ensure g++ is installed and on PATH.
      exit /b 1
    )
  )
  echo Running %NAME%...
  "%BUILD_DIR%\%NAME%.exe"
  exit /b %ERRORLEVEL%
) else if exist "%JAVA%" (
  echo Compiling %JAVA%...
  javac -d "%BUILD_DIR%" "%JAVA%" || (
    echo javac failed. Ensure JDK is installed and on PATH.
    exit /b 1
  )
  pushd "%BUILD_DIR%"
  echo Running %NAME% (Java)...
  java %NAME%
  popd
  exit /b %ERRORLEVEL%
) else (
  echo Solution not found: %CPP% or %JAVA%
  exit /b 1
)
