Daily workflow for this repository

This repository is organized to make daily problem-solving fast and reproducible.

Quick commands

- Create a new C++ solution and notes:

  new-cpp.bat ProblemName

- Create a new Java solution and notes:

  new-java.bat ProblemName

- Compile & run a solution by name (Windows PowerShell):

  .\run.bat ProblemName < input.txt

- Commit & push today's work:

  daily-push.bat "Short commit message"

Guidelines for each solution

- Keep a short header comment in the source containing:
  - Problem title and link
  - Short paraphrase of the statement (1-3 sentences)
  - Short solution strategy / explanation

- After solving, fill the corresponding row in docs/PROBLEMS.md with a concise paraphrase and explanation (the runner can be used to test locally).

Notes

- The runner will try to compile with g++ (C++) or javac (Java). Make sure those are installed and available on PATH when running locally.
- Compiled binaries and class files are placed in .build/ and the folder is ignored by .gitignore.
