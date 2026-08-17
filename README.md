<div align="center">

# ⚡ Competitive Programming & DSA Archive

**A curated, production-grade repository of optimized algorithmic solutions and data structure implementations.**

[![Language - C++20](https://img.shields.io/badge/Language-C%2B%2B17%2F20-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white)](solutions/cpp/)
[![Language - Java](https://img.shields.io/badge/Language-Java%2017-ED8B00?style=for-the-badge&logo=openjdk&logoColor=white)](solutions/java/)
[![Solutions Solved](https://img.shields.io/badge/Solved-74%2B%20Problems-brightgreen?style=for-the-badge&logo=codeforces&logoColor=white)](docs/PROBLEMS.md)
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
│   ├── cpp/                # C++17/20 competitive programming solutions (64 files)
│   └── java/               # Java 17 optimized solutions with Fast I/O (10 files)
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

### 🚀 C++ Solutions (64)

| Problem | Contest / Platform | Tags | Difficulty | Time | Space | Solution |
| :--- | :--- | :--- | :---: | :---: | :---: | :---: |
| **0, 1, 2-Tree** | Codeforces 1950F | Trees, BFS, Greedy, Level Simulation | 1500 | $O(a + b + c)$ | $O(a + b + c)$ for the BFS queue | [012Tree.cpp](solutions/cpp/012Tree.cpp) |
| **AVL Tree Implementation** | Codeforces / DSA | Balanced Binary Search Trees, Self-Balancing, Tree Rotations | — | $O(\log N)$ per insertion/lookup | $O(N)$ total storage, $O(\log N)$ recursive stack depth | [AVL.cpp](solutions/cpp/AVL.cpp) |
| **Abbreviation Feasibility** | Codeforces / DSA | Strings, Greedy Search | — | $O(N + M)$ | $O(1)$ | [Abbrevation.cpp](solutions/cpp/Abbrevation.cpp) |
| **Absolutecinema** | Codeforces / DSA | Algorithms, Problem Solving | — | $O(N)$ | $O(1)$ | [Absolutecinema.cpp](solutions/cpp/Absolutecinema.cpp) |
| **Ambitious Kid** | Codeforces 1866A | Greedy, Arrays, Math | 800 | $O(N)$ | $O(1)$ | [AmbitionKid.cpp](solutions/cpp/AmbitionKid.cpp) |
| **AnotherBeautifulPairs** | Codeforces / DSA | Algorithms, Problem Solving | — | $O(N)$ | $O(1)$ | [AnotherBeautifulPairs.cpp](solutions/cpp/AnotherBeautifulPairs.cpp) |
| **ArrayAndPermutation** | Codeforces / DSA | Algorithms, Problem Solving | — | $O(N)$ | $O(1)$ | [ArrayAndPermutation.cpp](solutions/cpp/ArrayAndPermutation.cpp) |
| **Binary Search Tree (BST)** | Codeforces / DSA | Trees, BST, Recursive Traversals | — | $O(H)$ per operation, where $H \in [O(\log N), O(N)]$ | $O(N)$ storage | [BST.cpp](solutions/cpp/BST.cpp) |
| **Blank Space** | Codeforces 1829B | Arrays, Linear Scan | 800 | $O(N)$ | $O(1)$ | [BlankSpace.cpp](solutions/cpp/BlankSpace.cpp) |
| **Building an Aquarium** | Codeforces 1873E | Binary Search on Answer, Monotonicity | 1100 | $O(N \log(\text{range}))$ | $O(1)$ | [BuildingAquarium.cpp](solutions/cpp/BuildingAquarium.cpp) |
| **Buttons** | Codeforces 1858A | Game Theory, Parity | 800 | $O(1)$ | $O(1)$ | [Buttons.cpp](solutions/cpp/Buttons.cpp) |
| **Coins** | Codeforces 1814A | Math, Number Theory, Diophantine | 800 | $O(1)$ | $O(1)$ | [Coins.cpp](solutions/cpp/Coins.cpp) |
| **Cover in Water** | Codeforces 1900A | Greedy, String Processing | 800 | $O(N)$ | $O(1)$ | [CoverInWater.cpp](solutions/cpp/CoverInWater.cpp) |
| **How Much Does Daytona Cost?** | Codeforces 1878A | Greedy, Arrays | 800 | $O(N)$ | $O(1)$ | [DaytonaCost.cpp](solutions/cpp/DaytonaCost.cpp) |
| **Desorting** | Codeforces 1853A | Greedy, Arrays, Math | 800 | $O(N)$ | $O(1)$ | [Desorting.cpp](solutions/cpp/Desorting.cpp) |
| **Dice Roll Sequence Optimization** | Codeforces / DSA | Dynamic Programming, State Machine DP | — | $O(36 \cdot N) = O(N)$ | $O(N)$ or $O(1)$ space with state compression | [DiceRollSeq.cpp](solutions/cpp/DiceRollSeq.cpp) |
| **Don't Try to Count** | Codeforces 1881A | Strings, Brute Force, Doubling | 800 | $O(|x| \cdot |s|)$ | $O(|x|)$ | [DontTryToCount.cpp](solutions/cpp/DontTryToCount.cpp) |
| **Doremy's Paint 3** | Codeforces 1890A | Hash Map, Frequency Analysis, Constructive | 800 | $O(N)$ | $O(N)$ | [DoremysPaint3.cpp](solutions/cpp/DoremysPaint3.cpp) |
| **Extremely Round** | Codeforces 1766A | Math, Combinatorics, Digit DP | 800 | $O(\log_{10} N)$ | $O(1)$ | [ExtremlyRound.cpp](solutions/cpp/ExtremlyRound.cpp) |
| **FlipBinary** | Codeforces / DSA | Algorithms, Problem Solving | — | $O(N)$ | $O(1)$ | [FlipBinary.cpp](solutions/cpp/FlipBinary.cpp) |
| **Forbidden Integer** | Codeforces 1845A | Constructive Algorithms, Greedy, Math | 800 | $O(N)$ | $O(N)$ | [ForbiddenInteger.cpp](solutions/cpp/ForbiddenInteger.cpp) |
| **GameWithFraction** | Codeforces / DSA | Algorithms, Problem Solving | — | $O(N)$ | $O(1)$ | [GameWithFraction.cpp](solutions/cpp/GameWithFraction.cpp) |
| **Game with Integers** | Codeforces 1899A | Game Theory, Modular Arithmetic | 800 | $O(1)$ | $O(1)$ | [GameWithIntegers.cpp](solutions/cpp/GameWithIntegers.cpp) |
| **Gigantomachy** | Codeforces / DSA | Algorithms, Problem Solving | — | $O(N)$ | $O(1)$ | [Gigantomachy.cpp](solutions/cpp/Gigantomachy.cpp) |
| **Goals of Victory** | Codeforces 1877A | Math, Invariant Analysis | 800 | $O(N)$ | $O(1)$ | [GoalsOfVictory.cpp](solutions/cpp/GoalsOfVictory.cpp) |
| **Grasshopper on a Line** | Codeforces 1837A | Constructive, Math | 800 | $O(1)$ | $O(1)$ | [GrasshopperOnLine.cpp](solutions/cpp/GrasshopperOnLine.cpp) |
| **Halloumi Boxes** | Codeforces 1903A | Sorting, Permutations, Invariants | 800 | $O(N)$ | $O(1)$ | [HalloumiBoxes.cpp](solutions/cpp/HalloumiBoxes.cpp) |
| **Odd-Core Heapify Permutations** | Codeforces / DSA | Group Theory, Bitwise Decomposition | — | $O(N \log N)$ | $O(N)$ | [Heapify1.cpp](solutions/cpp/Heapify1.cpp) |
| **Idiot First Search (DFS Traversal Timing)** | Codeforces / DSA | Trees, Tree DP, Graph Traversal, Timing Analysis | — | $O(N)$ | $O(N)$ | [IdiotFirstSearch.cpp](solutions/cpp/IdiotFirstSearch.cpp) |
| **Jagged Swaps** | Codeforces 1896A | Permutations, Invariants | 800 | $O(N)$ | $O(1)$ | [JaggedSwaps.cpp](solutions/cpp/JaggedSwaps.cpp) |
| **K-th Equality Construction** | Codeforces / DSA | Combinatorics, Math, Digit Ranges | — | $O(10^a)$ | $O(1)$ | [KthEquality.cpp](solutions/cpp/KthEquality.cpp) |
| **Line Trip** | Codeforces 1901A | Greedy, Arrays, Math | 800 | $O(N)$ | $O(1)$ | [LineTrip.cpp](solutions/cpp/LineTrip.cpp) |
| **Magnitude (Hard Version)** | Codeforces 1984C | Dynamic Programming, Prefix Sums, Combinatorics | 1400 | $O(N)$ | $O(1)$ auxiliary space | [Magnitude.cpp](solutions/cpp/Magnitude.cpp) |
| **Make AP** | Codeforces 1624B | Math, Arithmetic Progression | 900 | $O(1)$ | $O(1)$ | [MakeAP.cpp](solutions/cpp/MakeAP.cpp) |
| **Make It Beautiful** | Codeforces 1783A | Constructive, Greedy, Sorting | 800 | $O(N \log N)$ | $O(1)$ | [MakeItBeautiful.cpp](solutions/cpp/MakeItBeautiful.cpp) |
| **MinAbsSum** | Codeforces / DSA | Algorithms, Problem Solving | — | $O(N)$ | $O(1)$ | [MinAbsSum.cpp](solutions/cpp/MinAbsSum.cpp) |
| **Minimizing Sum with Operations** | Codeforces / DSA | Dynamic Programming, Range Minimum, Block Partitioning | — | $O(N \cdot K^2)$ | $O(N \cdot K)$ | [MinimizingSum.cpp](solutions/cpp/MinimizingSum.cpp) |
| **Neutral Tonality** | Codeforces 1898C / LIS Optimization | Greedy, Two Pointers, LIS | 1300 | $O((N + M) \log M)$ | $O(N + M)$ | [NeutralTonality.cpp](solutions/cpp/NeutralTonality.cpp) |
| **One and Two** | Codeforces 1788A | Math, Prefix Products, Factorization | 800 | $O(N)$ | $O(1)$ | [OneAndTwo.cpp](solutions/cpp/OneAndTwo.cpp) |
| **Parabola Independence (Geometry LIS)** | Codeforces / DSA | Computational Geometry, Longest Increasing Subsequence, DP | — | $O(N^2 \log N)$ | $O(N)$ | [ParabolaIndepend.cpp](solutions/cpp/ParabolaIndepend.cpp) |
| **Prepend and Append** | Codeforces 1791C | Two Pointers, Strings | 800 | $O(N)$ | $O(1)$ | [PrependAndAppend.cpp](solutions/cpp/PrependAndAppend.cpp) |
| **Running Miles** | Codeforces 1826D | Dynamic Programming, Prefix & Suffix Optimization, Greedy | 1700 | $O(N)$ | $O(N)$ | [RunningMiles.cpp](solutions/cpp/RunningMiles.cpp) |
| **Sequence Game** | Codeforces 1862B | Constructive Algorithms, Arrays | 800 | $O(N)$ | $O(N)$ | [SequenceGame.cpp](solutions/cpp/SequenceGame.cpp) |
| **Serval and Mocha's Array** | Codeforces 1789A | Number Theory, GCD, Pairs | 800 | $O(N^2 \log(\max A))$ | $O(1)$ | [ServalAndMochasArray.cpp](solutions/cpp/ServalAndMochasArray.cpp) |
| **Spying on the Beaver** | Codeforces / DSA | DP on Trees, Minimum Vertex Cover, Graph Optimization | — | $O(N)$ | $O(N)$ | [SpyingOnTheBeaver.cpp](solutions/cpp/SpyingOnTheBeaver.cpp) |
| **Squares** | Codeforces / DSA | Algorithms, Problem Solving | — | $O(N)$ | $O(1)$ | [Squares.cpp](solutions/cpp/Squares.cpp) |
| **StringGame** | Codeforces / DSA | Algorithms, Problem Solving | — | $O(N)$ | $O(1)$ | [StringGame.cpp](solutions/cpp/StringGame.cpp) |
| **SubArray** | Codeforces / DSA | Algorithms, Problem Solving | — | $O(N)$ | $O(1)$ | [SubArray.cpp](solutions/cpp/SubArray.cpp) |
| **Target Practice** | Codeforces 1873C | 2D Matrix, Geometry, Distance Metric | 800 | $O(1)$ (constant 10x10 grid) | $O(1)$ | [TargetPractice.cpp](solutions/cpp/TargetPractice.cpp) |
| **Three Parts of the Array** | Codeforces 1006C | Two Pointers, Prefix & Suffix Sums | 1200 | $O(N)$ | $O(1)$ | [ThreePartsOfArray.cpp](solutions/cpp/ThreePartsOfArray.cpp) |
| **Twin Permutations** | Codeforces 1831A | Permutations, Constructive | 800 | $O(N)$ | $O(N)$ | [TwinPermutations.cpp](solutions/cpp/TwinPermutations.cpp) |
| **Two Permutations** | Codeforces 1761A | Constructive, Permutations | 800 | $O(1)$ | $O(1)$ | [TwoPermutations.cpp](solutions/cpp/TwoPermutations.cpp) |
| **Unit Array** | Codeforces 1834A | Greedy, Math, Parity | 800 | $O(N)$ | $O(1)$ | [UnitArray.cpp](solutions/cpp/UnitArray.cpp) |
| **United We Stand** | Codeforces 1859A | Number Theory, Divisibility, Sorting | 800 | $O(N \log N)$ | $O(N)$ | [UnitedWeStand.cpp](solutions/cpp/UnitedWeStand.cpp) |
| **XOR Game** | Codeforces / DSA | Bit Manipulation, Parity, Game Theory | — | $O(N)$ | $O(1)$ | [XORgame.cpp](solutions/cpp/XORgame.cpp) |
| **beautifulNumbers** | Codeforces / DSA | Algorithms, Problem Solving | — | $O(N)$ | $O(1)$ | [beautifulNumbers.cpp](solutions/cpp/beautifulNumbers.cpp) |
| **farmlegs** | Codeforces / DSA | Algorithms, Problem Solving | — | $O(N)$ | $O(1)$ | [farmlegs.cpp](solutions/cpp/farmlegs.cpp) |
| **friendlyNumbers** | Codeforces / DSA | Algorithms, Problem Solving | — | $O(N)$ | $O(1)$ | [friendlyNumbers.cpp](solutions/cpp/friendlyNumbers.cpp) |
| **gcdArray** | Codeforces / DSA | Algorithms, Problem Solving | — | $O(N)$ | $O(1)$ | [gcdArray.cpp](solutions/cpp/gcdArray.cpp) |
| **Make Connected** | Codeforces / DSA | Graphs, BFS, Grid Connectivity | — | $O(N^2)$ | $O(N^2)$ | [makeConnected.cpp](solutions/cpp/makeConnected.cpp) |
| **names** | Codeforces / DSA | Algorithms, Problem Solving | — | $O(N)$ | $O(1)$ | [names.cpp](solutions/cpp/names.cpp) |
| **prod67** | Codeforces / DSA | Algorithms, Problem Solving | — | $O(N)$ | $O(1)$ | [prod67.cpp](solutions/cpp/prod67.cpp) |
| **Rating Round Trip Intervals** | Codeforces / DSA | Interval DP, Disjoint Set Merging | — | $O(N \log N)$ | $O(N)$ | [roundTrip.cpp](solutions/cpp/roundTrip.cpp) |
| **towerboxes** | Codeforces / DSA | Algorithms, Problem Solving | — | $O(N)$ | $O(1)$ | [towerboxes.cpp](solutions/cpp/towerboxes.cpp) |

---

### ☕ Java Solutions (10)

| Problem | Contest / Platform | Tags | Difficulty | Time | Space | Solution |
| :--- | :--- | :--- | :---: | :---: | :---: | :---: |
| **Array Coloring** | Codeforces 1857A | Math, Parity Analysis | 800 | $O(N)$ | $O(1)$ | [ArrayColoring.java](solutions/java/ArrayColoring.java) |
| **Beautiful Matrix** | Codeforces 263A | Matrix, Manhattan Distance | 800 | $O(1)$ (5x5 matrix) | $O(1)$ | [BeautifulMatrix.java](solutions/java/BeautifulMatrix.java) |
| **Bitwise Reversion** | Codeforces / DSA | Bit Manipulation, Bitwise Constraints | — | $O(32) = O(1)$ | $O(1)$ | [BitwiseReversion.java](solutions/java/BitwiseReversion.java) |
| **Circle of Apples** | Codeforces / DSA | Hash Sets, Distinct Element Counting | — | $O(N)$ | $O(N)$ | [CircleOfApples.java](solutions/java/CircleOfApples.java) |
| **Odd One Out** | Codeforces 1915A | Bitwise XOR | 800 | $O(1)$ | $O(1)$ | [OddOneOut.java](solutions/java/OddOneOut.java) |
| **Pizza Time** | Codeforces / DSA | Combinatorics, Integer Division | — | $O(1)$ | $O(1)$ | [PizzaTime.java](solutions/java/PizzaTime.java) |
| **Strange Machine (Binary Lifting)** | Codeforces / DSA | Binary Lifting, Memoization, DP | — | $O(Q \log(\max A))$ | $O(N \log(\max A))$ | [StrangeMachine.java](solutions/java/StrangeMachine.java) |
| **Submatrix Sum (2D Prefix Sums)** | Codeforces / DSA | 2D Prefix Sums, Inclusion-Exclusion | — | $O(R \cdot C)$ precomputation, $O(1)$ per query | $O(R \cdot C)$ | [SubmatrixSum.java](solutions/java/SubmatrixSum.java) |
| **Theatre Square** | Codeforces 1A | Math, Geometry Tiling | 1000 | $O(1)$ | $O(1)$ | [TheatreSquare.java](solutions/java/TheatreSquare.java) |
| **Unconventional Pairs** | Codeforces / DSA | Sorting, Greedy Pairing | — | $O(N \log N)$ | $O(N)$ | [UnconventionalPairs.java](solutions/java/UnconventionalPairs.java) |

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
