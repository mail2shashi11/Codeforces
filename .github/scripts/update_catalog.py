import os
import re
import glob

REPO_ROOT = os.path.abspath(os.path.join(os.path.dirname(__file__), "..", ".."))
SOLUTIONS_CPP_DIR = os.path.join(REPO_ROOT, "solutions", "cpp")
SOLUTIONS_JAVA_DIR = os.path.join(REPO_ROOT, "solutions", "java")
README_PATH = os.path.join(REPO_ROOT, "README.md")
PROBLEMS_DOC_PATH = os.path.join(REPO_ROOT, "docs", "PROBLEMS.md")


def parse_solution_file(filepath, lang):
    filename = os.path.basename(filepath)
    name_no_ext = os.path.splitext(filename)[0]

    with open(filepath, "r", encoding="utf-8", errors="ignore") as f:
        content = f.read()

    # Defaults
    title = name_no_ext
    contest = "Codeforces / DSA"
    tags = "Algorithms, Problem Solving"
    difficulty = "—"
    time_comp = "$O(N)$"
    space_comp = "$O(1)$"
    statement = f"Solve the {name_no_ext} algorithmic challenge by processing input constraints and applying optimized logic."
    intuition = "Analyze the input constraints, identify monotonic or invariant properties, and implement an optimal approach."

    # Try to extract block comment
    comment_match = re.search(r"/\*\*(.*?)\*/", content, re.DOTALL)
    if comment_match:
        comment = comment_match.group(1)
        for line in comment.split("\n"):
            line = line.strip().lstrip("*").strip()
            if line.lower().startswith("problem:"):
                title = line.split(":", 1)[1].strip()
            elif line.lower().startswith("problem"):
                title = line.strip()
            elif line.lower().startswith("platform:") or line.lower().startswith("contest:"):
                contest = line.split(":", 1)[1].strip()
            elif line.lower().startswith("strategy:") or line.lower().startswith("approach:"):
                intuition = line.split(":", 1)[1].strip()
            elif line.lower().startswith("difficulty:"):
                difficulty = line.split(":", 1)[1].strip()
            elif line.lower().startswith("time:"):
                time_comp = line.split(":", 1)[1].strip()
            elif line.lower().startswith("space:"):
                space_comp = line.split(":", 1)[1].strip()
            elif line.lower().startswith("tags:"):
                tags = line.split(":", 1)[1].strip()

    # Detect common CF problem pattern like "Problem 1901A - Line Trip"
    cf_match = re.search(r"Problem\s+(\d+[A-Z]\d?)\s*[-:]\s*(.+)", title, re.IGNORECASE)
    if cf_match:
        contest = f"CF {cf_match.group(1).upper()}"
        title = cf_match.group(2).strip()

    return {
        "filename": filename,
        "name_no_ext": name_no_ext,
        "lang": lang,
        "rel_path": f"solutions/{lang.lower()}/{filename}",
        "title": title,
        "contest": contest,
        "tags": tags,
        "difficulty": difficulty,
        "time_comp": time_comp,
        "space_comp": space_comp,
        "statement": statement,
        "intuition": intuition
    }


def load_existing_problem_docs():
    """Load existing rich problem metadata from docs/PROBLEMS.md if present."""
    if not os.path.exists(PROBLEMS_DOC_PATH):
        return {}

    with open(PROBLEMS_DOC_PATH, "r", encoding="utf-8") as f:
        content = f.read()

    entries = {}
    # Pattern: #### X. [Title](../solutions/lang/file.ext) ... details
    sections = re.findall(r"####\s+\d+\.\s+\[(.*?)\]\(\.\./solutions/(cpp|java)/(.*?)\)(.*?)(?=(?:####|\n## |\Z))", content, re.DOTALL)
    for title, lang, filename, body in sections:
        item = {"title": title.strip()}
        
        cf_match = re.search(r"\*\*Platform / Contest:\*\*\s*(.+)", body)
        if cf_match:
            item["contest"] = cf_match.group(1).strip()
            
        tags_match = re.search(r"\*\*Tags:\*\*\s*(.+)", body)
        if tags_match:
            item["tags"] = tags_match.group(1).strip()

        diff_match = re.search(r"\*\*Difficulty:\*\*\s*(.+)", body)
        if diff_match:
            item["difficulty"] = diff_match.group(1).strip()

        stmt_match = re.search(r"\*\*Problem Statement:\*\*\s*(.+)", body)
        if stmt_match:
            item["statement"] = stmt_match.group(1).strip()

        strat_match = re.search(r"\*\*Intuition & Strategy:\*\*\s*(.+)", body)
        if strat_match:
            item["intuition"] = strat_match.group(1).strip()

        time_match = re.search(r"\*\*Time:\*\*\s*(.+)", body)
        if time_match:
            item["time_comp"] = time_match.group(1).strip()

        space_match = re.search(r"\*\*Space:\*\*\s*(.+)", body)
        if space_match:
            item["space_comp"] = space_match.group(1).strip()

        entries[filename] = item

    return entries


def scan_all_solutions():
    existing_docs = load_existing_problem_docs()
    cpp_files = sorted(glob.glob(os.path.join(SOLUTIONS_CPP_DIR, "*.cpp")))
    java_files = sorted(glob.glob(os.path.join(SOLUTIONS_JAVA_DIR, "*.java")))

    solutions = []

    for f in cpp_files:
        sol = parse_solution_file(f, "cpp")
        fn = sol["filename"]
        if fn in existing_docs:
            sol.update({k: v for k, v in existing_docs[fn].items() if v})
        solutions.append(sol)

    for f in java_files:
        sol = parse_solution_file(f, "java")
        fn = sol["filename"]
        if fn in existing_docs:
            sol.update({k: v for k, v in existing_docs[fn].items() if v})
        solutions.append(sol)

    return solutions


def generate_readme(solutions):
    cpp_sols = [s for s in solutions if s["lang"] == "cpp"]
    java_sols = [s for s in solutions if s["lang"] == "java"]
    total_count = len(solutions)

    cpp_rows = []
    for s in cpp_sols:
        cpp_rows.append(f"| **{s['title']}** | {s['contest']} | {s['tags']} | {s['difficulty']} | {s['time_comp']} | {s['space_comp']} | [{s['filename']}]({s['rel_path']}) |")

    java_rows = []
    for s in java_sols:
        java_rows.append(f"| **{s['title']}** | {s['contest']} | {s['tags']} | {s['difficulty']} | {s['time_comp']} | {s['space_comp']} | [{s['filename']}]({s['rel_path']}) |")

    readme_content = f"""<div align="center">

# ⚡ Competitive Programming & DSA Archive

**A curated, production-grade repository of optimized algorithmic solutions and data structure implementations.**

[![Language - C++20](https://img.shields.io/badge/Language-C%2B%2B17%2F20-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white)](solutions/cpp/)
[![Language - Java](https://img.shields.io/badge/Language-Java%2017-ED8B00?style=for-the-badge&logo=openjdk&logoColor=white)](solutions/java/)
[![Solutions Solved](https://img.shields.io/badge/Solved-{total_count}%2B%20Problems-brightgreen?style=for-the-badge&logo=codeforces&logoColor=white)](docs/PROBLEMS.md)
[![License - MIT](https://img.shields.io/badge/License-MIT-yellow?style=for-the-badge)](LICENSE)

<br/>

**Author:** [Shashidhar Akula](https://github.com/mail2shashi11) &bull; **Repository:** [Codeforces & DSA Archive](https://github.com/mail2shashi11/Codeforces)

</div>

---

## 📌 Overview

This repository contains optimized solutions to competitive programming challenges from **Codeforces** and classical **Data Structures & Algorithms** benchmarks. Every solution is written with optimal asymptotic time and space complexity, comprehensive edge-case handling, and clean modular code standards.

### ✨ Key Highlights

- **Optimal Asymptotics:** Every problem is analyzed and implemented with minimal time and space footprints.
- **In-Depth Explanations:** Complete mathematical intuitions, proofs, and algorithmic breakdowns documented in [docs/PROBLEMS.md](docs/PROBLEMS.md).
- **Fast I/O & Templates:** Reusable, zero-overhead starter templates for C++ and Java competitive programming.
- **Related Projects:** Interactive balanced search tree visualizers (AVL & Red-Black Trees) are maintained in the companion project [Tree-Visualizer](https://github.com/mail2shashi11/Tree-Visualizer).

---

## 📂 Repository Structure

```text
.
├── docs/
│   └── PROBLEMS.md         # Comprehensive problem explanations & complexity analyses
├── solutions/
│   ├── cpp/                # C++17/20 competitive programming solutions ({len(cpp_sols)} files)
│   └── java/               # Java 17 optimized solutions with Fast I/O ({len(java_sols)} files)
├── templates/
│   ├── cpp.cpp             # Starter C++ competitive programming template
│   └── java.java           # Starter Java competitive programming template
├── .editorconfig           # Standardized formatting rules
├── .gitattributes          # Line-ending normalizations
└── .gitignore              # Ignores binaries, caches, and scratch files
```

---

## 🧠 Topic & Category Breakdown

| Category | Primary Techniques |
| :--- | :--- |
| **Greedy & Constructive** | Invariant analysis, sorting, parity checks, interval scheduling |
| **Dynamic Programming** | State machine DP, prefix/suffix optimization, tree DP, interval DP |
| **Math & Number Theory** | Modular arithmetic, GCD/LCM, combinatorics, prime factorizations |
| **Trees & Graphs** | Tree traversals, BFS/DFS, minimum vertex cover, AVL/BST |
| **Two Pointers & Binary Search** | Monotonicity search, shrinking windows, prefix-suffix matching |
| **Bit Manipulation & Game Theory** | XOR properties, bitmasks, Nim game variants, parity rules |
| **Data Structures & Matrices** | 2D Prefix Sums, Binary Lifting, Balanced Trees, Disjoint Sets |

---

## 📑 Problem Catalog

A curated index of solutions. For in-depth algorithmic explanations, visit [docs/PROBLEMS.md](docs/PROBLEMS.md).

### 🚀 C++ Solutions ({len(cpp_sols)})

| Problem | Contest / Platform | Tags | Difficulty | Time | Space | Solution |
| :--- | :--- | :--- | :---: | :---: | :---: | :---: |
""" + "\n".join(cpp_rows) + f"""

---

### ☕ Java Solutions ({len(java_sols)})

| Problem | Contest / Platform | Tags | Difficulty | Time | Space | Solution |
| :--- | :--- | :--- | :---: | :---: | :---: | :---: |
""" + "\n".join(java_rows) + """

---

## 🛠️ Compilation & Execution

### C++ Solutions
Compile with optimization flags using standard GCC/Clang:

```bash
# Compile
g++ -O3 -std=c++17 solutions/cpp/LineTrip.cpp -o LineTrip

# Execute with standard input or file redirection
./LineTrip < input.txt
```

### Java Solutions
Compile and execute using standard OpenJDK (Java 11+):

```bash
# Compile
javac -d bin solutions/java/TheatreSquare.java

# Execute
java -cp bin TheatreSquare < input.txt
```

---

## 📜 License & Acknowledgments

This repository is licensed under the [MIT License](LICENSE). Problem statements and contest benchmarks belong to [Codeforces](https://codeforces.com).
"""
    return readme_content


def generate_problems_doc(solutions):
    cpp_sols = [s for s in solutions if s["lang"] == "cpp"]
    java_sols = [s for s in solutions if s["lang"] == "java"]

    lines = [
        "# Problem Solutions & Algorithmic Explanations",
        "",
        "Comprehensive technical catalog of competitive programming solutions, algorithmic strategies, and complexity analyses across Codeforces and classic Data Structures & Algorithms.",
        "",
        "---",
        "",
        "## Table of Contents",
        "",
        "- [C++ Solutions](#c-solutions)",
        "- [Java Solutions](#java-solutions)",
        "",
        "---",
        "",
        f"## C++ Solutions ({len(cpp_sols)})",
        ""
    ]

    for i, s in enumerate(cpp_sols, 1):
        lines.extend([
            f"#### {i}. [{s['title']}](../{s['rel_path']})",
            f"- **Platform / Contest:** {s['contest']}",
            f"- **Tags:** {s['tags']}",
            f"- **Difficulty:** {s['difficulty']}",
            f"- **Problem Statement:** {s['statement']}",
            f"- **Intuition & Strategy:** {s['intuition']}",
            "- **Complexity:**",
            f"  - **Time:** {s['time_comp']}",
            f"  - **Space:** {s['space_comp']}",
            ""
        ])

    lines.extend([
        "---",
        "",
        f"## Java Solutions ({len(java_sols)})",
        ""
    ])

    for i, s in enumerate(java_sols, 1):
        lines.extend([
            f"#### {i}. [{s['title']}](../{s['rel_path']})",
            f"- **Platform / Contest:** {s['contest']}",
            f"- **Tags:** {s['tags']}",
            f"- **Difficulty:** {s['difficulty']}",
            f"- **Problem Statement:** {s['statement']}",
            f"- **Intuition & Strategy:** {s['intuition']}",
            "- **Complexity:**",
            f"  - **Time:** {s['time_comp']}",
            f"  - **Space:** {s['space_comp']}",
            ""
        ])

    return "\n".join(lines) + "\n"


def main():
    solutions = scan_all_solutions()
    print(f"Discovered {len(solutions)} solution files ({len([s for s in solutions if s['lang']=='cpp'])} C++, {len([s for s in solutions if s['lang']=='java'])} Java).")

    new_readme = generate_readme(solutions)
    with open(README_PATH, "w", encoding="utf-8") as f:
        f.write(new_readme)
    print("Updated README.md successfully.")

    new_problems_doc = generate_problems_doc(solutions)
    os.makedirs(os.path.dirname(PROBLEMS_DOC_PATH), exist_ok=True)
    with open(PROBLEMS_DOC_PATH, "w", encoding="utf-8") as f:
        f.write(new_problems_doc)
    print("Updated docs/PROBLEMS.md successfully.")


if __name__ == "__main__":
    main()
