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
│   ├── cpp/                # C++17/20 competitive programming solutions
│   └── java/               # Java 17 optimized solutions with Fast I/O
├── templates/
│   ├── cpp.cpp             # Starter C++ competitive programming template
│   └── java.java           # Starter Java competitive programming template
├── .editorconfig           # Standardized formatting rules
├── .gitattributes          # Line-ending normalizations
└── .gitignore              # Ignores binaries, caches, and scratch files
```

---

## 🧠 Topic & Category Breakdown

| Category | Primary Techniques | Solved Count |
| :--- | :--- | :---: |
| **Greedy & Constructive** | Invariant analysis, sorting, parity checks, interval scheduling | **25+** |
| **Dynamic Programming** | State machine DP, prefix/suffix optimization, tree DP, interval DP | **10+** |
| **Math & Number Theory** | Modular arithmetic, GCD/LCM, combinatorics, prime factorizations | **12+** |
| **Trees & Graphs** | Tree traversals, BFS/DFS, minimum vertex cover, AVL/BST | **8+** |
| **Two Pointers & Binary Search** | Monotonicity search, shrinking windows, prefix-suffix matching | **8+** |
| **Bit Manipulation & Game Theory** | XOR properties, bitmasks, Nim game variants, parity rules | **6+** |
| **Data Structures & Matrices** | 2D Prefix Sums, Binary Lifting, Balanced Trees, Disjoint Sets | **5+** |

---

## 📑 Problem Catalog

A curated index of solutions. For in-depth algorithmic explanations, visit [docs/PROBLEMS.md](docs/PROBLEMS.md).

### 🚀 C++ Solutions

| Problem | Contest / Platform | Tags | Difficulty | Time | Space | Solution |
| :--- | :--- | :--- | :---: | :---: | :---: | :---: |
| **0, 1, 2-Tree** | CF 1950F | Trees, BFS, Greedy | 1500 | $O(N)$ | $O(N)$ | [012Tree.cpp](solutions/cpp/012Tree.cpp) |
| **AVL Tree Implementation** | Classic DSA | Balanced BST, Rotations | — | $O(\log N)$ | $O(N)$ | [AVL.cpp](solutions/cpp/AVL.cpp) |
| **Abbreviation Feasibility** | String Processing | Greedy, Hash Map | — | $O(N+M)$ | $O(1)$ | [Abbrevation.cpp](solutions/cpp/Abbrevation.cpp) |
| **Absolute Cinema** | Math | Second Differences, Reconstruction | — | $O(N)$ | $O(N)$ | [Absolutecinema.cpp](solutions/cpp/Absolutecinema.cpp) |
| **Ambitious Kid** | CF 1866A | Math, Greedy | 800 | $O(N)$ | $O(1)$ | [AmbitionKid.cpp](solutions/cpp/AmbitionKid.cpp) |
| **Another Beautiful Pairs** | Number Theory | Divisors, Pair Counting | — | $O(N\sqrt{N})$ | $O(N)$ | [AnotherBeautifulPairs.cpp](solutions/cpp/AnotherBeautifulPairs.cpp) |
| **Array and Permutation** | Two Pointers | Compression, Subsequences | — | $O(N)$ | $O(N)$ | [ArrayAndPermutation.cpp](solutions/cpp/ArrayAndPermutation.cpp) |
| **Binary Search Tree** | Classic DSA | BST, Tree Traversals | — | $O(H)$ | $O(N)$ | [BST.cpp](solutions/cpp/BST.cpp) |
| **Beautiful Numbers** | Math | Greedy, Digit Reduction | — | $O(D \log D)$ | $O(D)$ | [beautifulNumbers.cpp](solutions/cpp/beautifulNumbers.cpp) |
| **Blank Space** | CF 1829B | Arrays, Linear Scan | 800 | $O(N)$ | $O(1)$ | [BlankSpace.cpp](solutions/cpp/BlankSpace.cpp) |
| **Building an Aquarium** | CF 1873E | Binary Search on Answer | 1100 | $O(N \log H)$ | $O(1)$ | [BuildingAquarium.cpp](solutions/cpp/BuildingAquarium.cpp) |
| **Buttons** | CF 1858A | Game Theory, Parity | 800 | $O(1)$ | $O(1)$ | [Buttons.cpp](solutions/cpp/Buttons.cpp) |
| **Coins** | CF 1814A | Math, Diophantine Equation | 800 | $O(1)$ | $O(1)$ | [Coins.cpp](solutions/cpp/Coins.cpp) |
| **Cover in Water** | CF 1900A | Greedy, String Processing | 800 | $O(N)$ | $O(1)$ | [CoverInWater.cpp](solutions/cpp/CoverInWater.cpp) |
| **Daytona Cost** | CF 1878A | Greedy, Subarrays | 800 | $O(N)$ | $O(1)$ | [DaytonaCost.cpp](solutions/cpp/DaytonaCost.cpp) |
| **Desorting** | CF 1853A | Arrays, Math, Greedy | 800 | $O(N)$ | $O(1)$ | [Desorting.cpp](solutions/cpp/Desorting.cpp) |
| **Dice Roll Sequence** | Dynamic Programming | State Machine DP | — | $O(N)$ | $O(N)$ | [DiceRollSeq.cpp](solutions/cpp/DiceRollSeq.cpp) |
| **Don't Try to Count** | CF 1881A | Strings, Doubling | 800 | $O(\|s\| \cdot \|t\|)$ | $O(\|s\|)$ | [DontTryToCount.cpp](solutions/cpp/DontTryToCount.cpp) |
| **Doremy's Paint 3** | CF 1890A | Hash Map, Frequencies | 800 | $O(N)$ | $O(N)$ | [DoremysPaint3.cpp](solutions/cpp/DoremysPaint3.cpp) |
| **Extremely Round** | CF 1766A | Math, Combinatorics | 800 | $O(\log_{10} N)$ | $O(1)$ | [ExtremlyRound.cpp](solutions/cpp/ExtremlyRound.cpp) |
| **Farm Legs** | Math | Integer Division, Combinatorics | — | $O(1)$ | $O(1)$ | [farmlegs.cpp](solutions/cpp/farmlegs.cpp) |
| **Flip Binary** | Bit Manipulation | Parity, Greedy | — | $O(N)$ | $O(1)$ | [FlipBinary.cpp](solutions/cpp/FlipBinary.cpp) |
| **Forbidden Integer** | CF 1845A | Constructive, Math | 800 | $O(N)$ | $O(N)$ | [ForbiddenInteger.cpp](solutions/cpp/ForbiddenInteger.cpp) |
| **Friendly Numbers** | Number Theory | Modulo 9 Invariants | — | $O(100 \log N)$ | $O(1)$ | [friendlyNumbers.cpp](solutions/cpp/friendlyNumbers.cpp) |
| **Game with Fraction** | Game Theory | Modulo Arithmetic | — | $O(1)$ | $O(1)$ | [GameWithFraction.cpp](solutions/cpp/GameWithFraction.cpp) |
| **Game with Integers** | CF 1899A | Game Theory, Modulo 3 | 800 | $O(1)$ | $O(1)$ | [GameWithIntegers.cpp](solutions/cpp/GameWithIntegers.cpp) |
| **GCD Array** | Number Theory | Prime Sieve, Coprimality | — | $O(N \log A)$ | $O(1)$ | [gcdArray.cpp](solutions/cpp/gcdArray.cpp) |
| **Gigantomachy** | Greedy | Comparison | — | $O(N+M)$ | $O(1)$ | [Gigantomachy.cpp](solutions/cpp/Gigantomachy.cpp) |
| **Goals of Victory** | CF 1877A | Math, Zero-Sum Invariant | 800 | $O(N)$ | $O(1)$ | [GoalsOfVictory.cpp](solutions/cpp/GoalsOfVictory.cpp) |
| **Grasshopper on a Line** | CF 1837A | Constructive, Math | 800 | $O(1)$ | $O(1)$ | [GrasshopperOnLine.cpp](solutions/cpp/GrasshopperOnLine.cpp) |
| **Halloumi Boxes** | CF 1903A | Sorting, Inversions | 800 | $O(N)$ | $O(1)$ | [HalloumiBoxes.cpp](solutions/cpp/HalloumiBoxes.cpp) |
| **Heapify Permutations** | Group Theory | Bitwise Invariance | — | $O(N \log N)$ | $O(N)$ | [Heapify1.cpp](solutions/cpp/Heapify1.cpp) |
| **Idiot First Search** | Trees | DP on Trees, Timing | — | $O(N)$ | $O(N)$ | [IdiotFirstSearch.cpp](solutions/cpp/IdiotFirstSearch.cpp) |
| **Jagged Swaps** | CF 1896A | Permutations, Invariants | 800 | $O(N)$ | $O(1)$ | [JaggedSwaps.cpp](solutions/cpp/JaggedSwaps.cpp) |
| **K-th Equality** | Math | Range Intersection | — | $O(10^A)$ | $O(1)$ | [KthEquality.cpp](solutions/cpp/KthEquality.cpp) |
| **Line Trip** | CF 1901A | Greedy, Distances | 800 | $O(N)$ | $O(1)$ | [LineTrip.cpp](solutions/cpp/LineTrip.cpp) |
| **Magnitude (Hard)** | CF 1984C | Dynamic Programming | 1400 | $O(N)$ | $O(1)$ | [Magnitude.cpp](solutions/cpp/Magnitude.cpp) |
| **Make AP** | CF 1624B | Math, Progression Check | 900 | $O(1)$ | $O(1)$ | [MakeAP.cpp](solutions/cpp/MakeAP.cpp) |
| **Make Connected** | Graphs | BFS, Connectivity Validation | — | $O(N^2)$ | $O(N^2)$ | [makeConnected.cpp](solutions/cpp/makeConnected.cpp) |
| **Make It Beautiful** | CF 1783A | Sorting, Constructive | 800 | $O(N \log N)$ | $O(1)$ | [MakeItBeautiful.cpp](solutions/cpp/MakeItBeautiful.cpp) |
| **Min Abs Sum** | Greedy | Endpoint Reconstruction | — | $O(N)$ | $O(1)$ | [MinAbsSum.cpp](solutions/cpp/MinAbsSum.cpp) |
| **Minimizing Sum** | Dynamic Programming | Range Minimum Partitioning | — | $O(N K^2)$ | $O(NK)$ | [MinimizingSum.cpp](solutions/cpp/MinimizingSum.cpp) |
| **Names Anagram** | Strings | Sorting, Frequency | — | $O(N \log N)$ | $O(1)$ | [names.cpp](solutions/cpp/names.cpp) |
| **Neutral Tonality** | CF 1898C | Greedy, Two Pointers, LIS | 1300 | $O((N+M)\log M)$ | $O(N+M)$ | [NeutralTonality.cpp](solutions/cpp/NeutralTonality.cpp) |
| **One and Two** | CF 1788A | Math, Factor Parity | 800 | $O(N)$ | $O(1)$ | [OneAndTwo.cpp](solutions/cpp/OneAndTwo.cpp) |
| **Parabola Independence** | Computational Geometry | DAG DP, LIS | — | $O(N^2 \log N)$ | $O(N)$ | [ParabolaIndepend.cpp](solutions/cpp/ParabolaIndepend.cpp) |
| **Prepend and Append** | CF 1791C | Two Pointers, Strings | 800 | $O(N)$ | $O(1)$ | [PrependAndAppend.cpp](solutions/cpp/PrependAndAppend.cpp) |
| **Product 67** | Arrays | Linear Scan | — | $O(N)$ | $O(1)$ | [prod67.cpp](solutions/cpp/prod67.cpp) |
| **Rating Round Trip** | Interval DP | Interval Merging | — | $O(N \log N)$ | $O(N)$ | [roundTrip.cpp](solutions/cpp/roundTrip.cpp) |
| **Running Miles** | CF 1826D | Prefix/Suffix DP, Greedy | 1700 | $O(N)$ | $O(N)$ | [RunningMiles.cpp](solutions/cpp/RunningMiles.cpp) |
| **Sequence Game** | CF 1862B | Constructive, Arrays | 800 | $O(N)$ | $O(N)$ | [SequenceGame.cpp](solutions/cpp/SequenceGame.cpp) |
| **Serval and Mocha's Array** | CF 1789A | Number Theory, GCD | 800 | $O(N^2 \log A)$ | $O(1)$ | [ServalAndMochasArray.cpp](solutions/cpp/ServalAndMochasArray.cpp) |
| **Spying on the Beaver** | Trees | DP on Trees, Vertex Cover | — | $O(N)$ | $O(N)$ | [SpyingOnTheBeaver.cpp](solutions/cpp/SpyingOnTheBeaver.cpp) |
| **Squares** | Geometry | Equality Check | — | $O(1)$ | $O(1)$ | [Squares.cpp](solutions/cpp/Squares.cpp) |
| **String Game** | Strings | Cyclic Rotation Simulation | — | $O(N^2)$ | $O(N)$ | [StringGame.cpp](solutions/cpp/StringGame.cpp) |
| **Subarray Product** | Sliding Window | Range Product | — | $O(N)$ | $O(1)$ | [SubArray.cpp](solutions/cpp/SubArray.cpp) |
| **Target Practice** | CF 1873C | 2D Grid, Distance Metric | 800 | $O(1)$ | $O(1)$ | [TargetPractice.cpp](solutions/cpp/TargetPractice.cpp) |
| **Three Parts of the Array** | CF 1006C | Two Pointers, Prefix Sums | 1200 | $O(N)$ | $O(1)$ | [ThreePartsOfArray.cpp](solutions/cpp/ThreePartsOfArray.cpp) |
| **Tower Boxes** | Math | Ceiling Division | — | $O(1)$ | $O(1)$ | [towerboxes.cpp](solutions/cpp/towerboxes.cpp) |
| **Twin Permutations** | CF 1831A | Permutations, Constructive | 800 | $O(N)$ | $O(N)$ | [TwinPermutations.cpp](solutions/cpp/TwinPermutations.cpp) |
| **Two Permutations** | CF 1761A | Constructive, Permutations | 800 | $O(1)$ | $O(1)$ | [TwoPermutations.cpp](solutions/cpp/TwoPermutations.cpp) |
| **Unit Array** | CF 1834A | Greedy, Math, Parity | 800 | $O(N)$ | $O(1)$ | [UnitArray.cpp](solutions/cpp/UnitArray.cpp) |
| **United We Stand** | CF 1859A | Number Theory, Sorting | 800 | $O(N \log N)$ | $O(N)$ | [UnitedWeStand.cpp](solutions/cpp/UnitedWeStand.cpp) |
| **XOR Game** | Game Theory | Bit Manipulation | — | $O(N)$ | $O(1)$ | [XORgame.cpp](solutions/cpp/XORgame.cpp) |

---

### ☕ Java Solutions

| Problem | Contest / Platform | Tags | Difficulty | Time | Space | Solution |
| :--- | :--- | :--- | :---: | :---: | :---: | :---: |
| **Array Coloring** | CF 1857A | Math, Parity Analysis | 800 | $O(N)$ | $O(1)$ | [ArrayColoring.java](solutions/java/ArrayColoring.java) |
| **Beautiful Matrix** | CF 263A | Matrix, Manhattan Distance | 800 | $O(1)$ | $O(1)$ | [BeautifulMatrix.java](solutions/java/BeautifulMatrix.java) |
| **Bitwise Reversion** | Bit Manipulation | 3-Variable Validity | — | $O(1)$ | $O(1)$ | [BitwiseReversion.java](solutions/java/BitwiseReversion.java) |
| **Circle of Apples** | Data Structures | HashSet, Unique Counting | — | $O(N)$ | $O(N)$ | [CircleOfApples.java](solutions/java/CircleOfApples.java) |
| **Odd One Out** | CF 1915A | Bitwise XOR | 800 | $O(1)$ | $O(1)$ | [OddOneOut.java](solutions/java/OddOneOut.java) |
| **Pizza Time** | Combinatorics | Integer Division | — | $O(1)$ | $O(1)$ | [PizzaTime.java](solutions/java/PizzaTime.java) |
| **Strange Machine** | Binary Lifting | Fast Queries, DP | — | $O(Q \log A)$ | $O(N \log A)$ | [StrangeMachine.java](solutions/java/StrangeMachine.java) |
| **Submatrix Sum** | 2D Prefix Sums | Inclusion-Exclusion Queries | — | $O(R \cdot C + Q)$ | $O(RC)$ | [SubmatrixSum.java](solutions/java/SubmatrixSum.java) |
| **Theatre Square** | CF 1A | Math, Tiling Division | 1000 | $O(1)$ | $O(1)$ | [TheatreSquare.java](solutions/java/TheatreSquare.java) |
| **Unconventional Pairs** | Greedy | Sorting, Difference Min | — | $O(N \log N)$ | $O(N)$ | [UnconventionalPairs.java](solutions/java/UnconventionalPairs.java) |

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

This repository is licensed under the [MIT License](LICENSE). Problem statements and contest benchmarks belong to [Codeforces](https://codeforces.com).
