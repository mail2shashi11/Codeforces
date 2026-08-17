@echo off
REM Stages all changes, commits with a message, and pushes to the current branch.
REM Usage: daily-push.bat "Commit message"
set MSG=%~1
if "%MSG%"=="" set MSG="Daily update"
echo Staging changes...
git add .necho Committing...
git commit -m %MSG% || (
  echo Nothing to commit or commit failed.
)
echo Pushing...
git push
echo Done.
