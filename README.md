# Codeforces and Algorithms Practice

A curated collection of competitive-programming solutions and data-structure demos written mainly in C++, with a smaller set of Java solutions.

The repository is organized for review and learning: source files are grouped by language, generated binaries are ignored, and every problem has a short explanation in the problem index.

## Repository Layout

```text
.
|-- docs/
|   `-- PROBLEMS.md          # Problem-by-problem explanation index
|-- solutions/
|   |-- cpp/                 # C++17 solutions and demos
|   `-- java/                # Java solutions and demos
|-- visualizers/             # Interactive HTML visualizers
|-- .editorconfig
|-- .gitignore
`-- README.md
```

## How to Run

Compile and run a C++ solution from the repository root:

```powershell
g++ -std=c++17 -O2 -Wall solutions/cpp/LineTrip.cpp -o LineTrip
.\LineTrip < input.txt
```

Compile and run a Java solution from the repository root:

```powershell
javac solutions/java/BeautifulMatrix.java
java -cp solutions/java BeautifulMatrix < input.txt
```

The generated `.exe`, `.class`, and other build artifacts are intentionally ignored by Git.

## Problem Guide

See [docs/PROBLEMS.md](docs/PROBLEMS.md) for a searchable index of all solutions, including the core idea and expected complexity for each file.

## Notes

- Most files are competitive-programming submissions that read from standard input and write to standard output.
- A few files are educational demos, such as binary-search-tree implementations and prefix-sum examples. These are marked in the problem index.
- File names are kept close to their original practice/problem names so they remain easy to map back to your local work.
