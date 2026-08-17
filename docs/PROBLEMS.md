# Problem Solutions & Algorithmic Explanations

Comprehensive technical catalog of competitive programming solutions, algorithmic strategies, and complexity analyses across Codeforces and classic Data Structures & Algorithms.

---

## Table of Contents

- [C++ Solutions](#c-solutions)
  - [Trees, Graphs & Data Structures](#trees-graphs--data-structures)
  - [Dynamic Programming & State Optimization](#dynamic-programming--state-optimization)
  - [Greedy Algorithms & Constructive Logic](#greedy-algorithms--constructive-logic)
  - [Math, Number Theory & Combinatorics](#math-number-theory--combinatorics)
  - [Two Pointers, Binary Search & Arrays](#two-pointers-binary-search--arrays)
  - [Bit Manipulation & Game Theory](#bit-manipulation--game-theory)
  - [Strings & Geometry](#strings--geometry)
- [Java Solutions](#java-solutions)

---

## C++ Solutions

### Trees, Graphs & Data Structures

#### 1. [0, 1, 2-Tree](../solutions/cpp/012Tree.cpp)
- **Platform / Contest:** Codeforces 1950F
- **Tags:** Trees, BFS, Greedy, Level Simulation
- **Difficulty:** 1500
- **Problem Statement:** You are given counts $a, b, c$ of nodes with 2, 1, and 0 children respectively in a rooted tree. Determine the minimum possible height of such a tree, or return `-1` if no valid tree exists.
- **Intuition & Strategy:** A valid ternary/binary tree requires $c = a + 1$ (leaves must equal branching nodes plus one). To minimize height, simulate a level-order BFS queue: place all $a$-nodes first (each creating 2 child slots), then all $b$-nodes (each maintaining 1 child slot), and finally close off remaining slots with $c$-leaf nodes.
- **Complexity:**
  - **Time:** $O(a + b + c)$
  - **Space:** $O(a + b + c)$ for the BFS queue

#### 2. [AVL Tree Implementation](../solutions/cpp/AVL.cpp)
- **Tags:** Balanced Binary Search Trees, Self-Balancing, Tree Rotations
- **Problem Statement:** Implementation of a self-balancing AVL Tree supporting dynamic key insertions, balance factor maintenance ($BF \in \{-1, 0, 1\}$), automatic rotation rebalancing (LL, RR, LR, RL), and formatted visual ASCII tree rendering.
- **Intuition & Strategy:** After standard BST insertion, update ancestor heights and inspect the balance factor $BF = \text{height}(L) - \text{height}(R)$. Apply single rotations (Left/Right) or double rotations (Left-Right/Right-Left) based on the imbalance direction to guarantee $O(\log N)$ tree depth.
- **Complexity:**
  - **Time:** $O(\log N)$ per insertion/lookup
  - **Space:** $O(N)$ total storage, $O(\log N)$ recursive stack depth

#### 3. [Binary Search Tree (BST)](../solutions/cpp/BST.cpp)
- **Tags:** Trees, BST, Recursive Traversals
- **Problem Statement:** Standard Binary Search Tree with node insertion, level-order shape visualization, and depth-first traversals (In-order, Pre-order, Post-order).
- **Intuition & Strategy:** Standard BST insertion placing smaller keys in the left subtree and greater keys in the right subtree. Includes ASCII formatting for visual debugging.
- **Complexity:**
  - **Time:** $O(H)$ per operation, where $H \in [O(\log N), O(N)]$
  - **Space:** $O(N)$ storage

#### 4. [Idiot First Search (DFS Traversal Timing)](../solutions/cpp/IdiotFirstSearch.cpp)
- **Tags:** Trees, Tree DP, Graph Traversal, Timing Analysis
- **Problem Statement:** Compute the deterministic arrival time of a tree traversal process visiting every node under specific transition delays.
- **Intuition & Strategy:** Run a bottom-up Tree DP to precompute total subtree traversal durations, followed by a top-down push to propagate accumulated parent-side waiting delays to every node.
- **Complexity:**
  - **Time:** $O(N)$
  - **Space:** $O(N)$

#### 5. [Make Connected](../solutions/cpp/makeConnected.cpp)
- **Tags:** Graphs, BFS, Grid Connectivity
- **Problem Statement:** Validate whether a grid can be made connected without introducing forbidden configurations (e.g., runs of three consecutive black cells).
- **Intuition & Strategy:** Reject forbidden patterns via structural validation, then execute BFS over valid cell candidates to paint safe connectivity paths.
- **Complexity:**
  - **Time:** $O(N^2)$
  - **Space:** $O(N^2)$

#### 6. [Spying on the Beaver](../solutions/cpp/SpyingOnTheBeaver.cpp)
- **Tags:** DP on Trees, Minimum Vertex Cover, Graph Optimization
- **Problem Statement:** Place the minimum number of surveillance cameras on tree vertices/edges such that all surveillance constraints are met, and reconstruct the selected camera set.
- **Intuition & Strategy:** Define state DP on tree nodes: $DP[u][0]$ (node not selected), $DP[u][1]$ (node selected). Solve subproblems bottom-up and backtrack to reconstruct optimal camera placements.
- **Complexity:**
  - **Time:** $O(N)$
  - **Space:** $O(N)$

---

### Dynamic Programming & State Optimization

#### 7. [Magnitude (Hard Version)](../solutions/cpp/Magnitude.cpp)
- **Platform / Contest:** Codeforces 1984C
- **Tags:** Dynamic Programming, Prefix Sums, Combinatorics
- **Difficulty:** 1400
- **Problem Statement:** Starting with $c = 0$, for each element $a_i$ you can choose either $c \leftarrow c + a_i$ or $c \leftarrow |c + a_i|$. Find the maximum possible final value and the number of operation sequences that achieve this maximum modulo $998244353$.
- **Intuition & Strategy:** The final maximum value is achieved either by never taking absolute values or by applying the absolute value at the global minimum prefix sum point. DP tracks both minimum and maximum reachable values alongside combinatorial ways modulo $998244353$.
- **Complexity:**
  - **Time:** $O(N)$
  - **Space:** $O(1)$ auxiliary space

#### 8. [Dice Roll Sequence Optimization](../solutions/cpp/DiceRollSeq.cpp)
- **Tags:** Dynamic Programming, State Machine DP
- **Problem Statement:** Given a sequence of dice rolls, find the minimum cost to modify the sequence such that no two adjacent rolls have identical or opposite faces.
- **Intuition & Strategy:** Maintain $DP[i][f]$ representing the minimum changes needed for prefix $i$ ending with face $f \in \{1 \dots 6\}$. Transition from valid non-adjacent, non-opposite faces $f'$.
- **Complexity:**
  - **Time:** $O(36 \cdot N) = O(N)$
  - **Space:** $O(N)$ or $O(1)$ space with state compression

#### 9. [Minimizing Sum with Operations](../solutions/cpp/MinimizingSum.cpp)
- **Tags:** Dynamic Programming, Range Minimum, Block Partitioning
- **Problem Statement:** Given an array $A$ and up to $K$ operations, modify contiguous subarray blocks to replace elements with the block minimum, minimizing total array sum.
- **Intuition & Strategy:** DP over prefix length $i$ and operation budget $j$. For each candidate block $[p, i]$, calculate optimal reduction using the block minimum $\min_{p \le k \le i} A[k]$.
- **Complexity:**
  - **Time:** $O(N \cdot K^2)$
  - **Space:** $O(N \cdot K)$

#### 10. [Running Miles](../solutions/cpp/RunningMiles.cpp)
- **Platform / Contest:** Codeforces 1826D
- **Tags:** Dynamic Programming, Prefix & Suffix Optimization, Greedy
- **Difficulty:** 1700
- **Problem Statement:** Choose three indices $l < m < r$ to maximize $(b_l + b_m + b_r) - (r - l) = (b_l + l) + b_m + (b_r - r)$.
- **Intuition & Strategy:** Decompose the objective into independent components: $(b_l + l)$, $b_m$, and $(b_r - r)$. Precompute prefix maximums of $(b_l + l)$ and suffix maximums of $(b_r - r)$, then iterate through all possible middle indices $m \in [1, n-2]$ in $O(1)$ per step.
- **Complexity:**
  - **Time:** $O(N)$
  - **Space:** $O(N)$

#### 11. [Parabola Independence (Geometry LIS)](../solutions/cpp/ParabolaIndepend.cpp)
- **Tags:** Computational Geometry, Longest Increasing Subsequence, DP
- **Problem Statement:** Find the maximum subset of mutually independent (non-intersecting) parabolas.
- **Intuition & Strategy:** Formulate pairwise independence via discriminant conditions $(b_1 - b_2)^2 - 4(a_1 - a_2)(c_1 - c_2) < 0$. Build the compatibility DAG and solve for the longest chain using DP with binary search optimization.
- **Complexity:**
  - **Time:** $O(N^2 \log N)$
  - **Space:** $O(N)$

#### 12. [Rating Round Trip Intervals](../solutions/cpp/roundTrip.cpp)
- **Tags:** Interval DP, Disjoint Set Merging
- **Problem Statement:** Given contest rating changes and conditional requirements, maintain reachable rating intervals and maximize contest participation counts.
- **Intuition & Strategy:** Track active rating intervals $[L, R]$, dynamically merge overlapping reachable states, and retain maximal count bounds.
- **Complexity:**
  - **Time:** $O(N \log N)$
  - **Space:** $O(N)$

---

### Greedy Algorithms & Constructive Logic

#### 13. [Line Trip](../solutions/cpp/LineTrip.cpp)
- **Platform / Contest:** Codeforces 1901A
- **Tags:** Greedy, Arrays, Math
- **Difficulty:** 800
- **Problem Statement:** A car travels from coordinate $0$ to destination $x$ and returns to $0$. Gas stations are located at coordinates $a_1, a_2, \dots, a_n$. Find the minimum fuel tank volume needed.
- **Intuition & Strategy:** The fuel tank must bridge every consecutive station gap $\max(a_i - a_{i-1})$ on the forward trip, and cover twice the distance from the last station to the destination $2 \cdot (x - a_n)$ since there is no station at $x$.
- **Complexity:**
  - **Time:** $O(N)$
  - **Space:** $O(1)$

#### 14. [Ambitious Kid](../solutions/cpp/AmbitionKid.cpp)
- **Platform / Contest:** Codeforces 1866A
- **Tags:** Greedy, Arrays, Math
- **Difficulty:** 800
- **Problem Statement:** Make the product of array elements equal to 0 with the minimum number of increment/decrement operations on any single element.
- **Intuition & Strategy:** The product becomes 0 as soon as at least one element equals 0. Find the element closest to 0: $\min_{i} |a_i|$.
- **Complexity:**
  - **Time:** $O(N)$
  - **Space:** $O(1)$

#### 15. [Cover in Water](../solutions/cpp/CoverInWater.cpp)
- **Platform / Contest:** Codeforces 1900A
- **Tags:** Greedy, String Processing
- **Difficulty:** 800
- **Problem Statement:** Fill empty cells `.` with water. You can either place water in an empty cell (cost 1) or take water from a cell flanked by two water cells (cost 0, creates infinite source).
- **Intuition & Strategy:** If there are 3 consecutive empty cells `...`, placing water in the outer two cells yields infinite water, requiring only 2 actions. Otherwise, every isolated empty cell must be filled manually.
- **Complexity:**
  - **Time:** $O(N)$
  - **Space:** $O(1)$

#### 16. [How Much Does Daytona Cost?](../solutions/cpp/DaytonaCost.cpp)
- **Platform / Contest:** Codeforces 1878A
- **Tags:** Greedy, Arrays
- **Difficulty:** 800
- **Problem Statement:** Determine if there exists a subsegment of array $a$ where $k$ is the most frequent element.
- **Intuition & Strategy:** A subsegment of length 1 containing $k$ has $k$ as the unique maximum frequency element (100%). Thus, the answer is `YES` if and only if $k$ appears in the array.
- **Complexity:**
  - **Time:** $O(N)$
  - **Space:** $O(1)$

#### 17. [Desorting](../solutions/cpp/Desorting.cpp)
- **Platform / Contest:** Codeforces 1853A
- **Tags:** Greedy, Arrays, Math
- **Difficulty:** 800
- **Problem Statement:** In one operation, add 1 to prefix $a[1 \dots i]$ and subtract 1 from suffix $a[i+1 \dots n]$. Find the minimum operations to make the array not sorted.
- **Intuition & Strategy:** If already unsorted ($a_i > a_{i+1}$), 0 operations needed. Otherwise, find the minimum adjacent gap $\min(a_{i+1} - a_i)$. Each operation reduces the gap by 2. Thus, $\lfloor \frac{\text{gap}}{2} \rfloor + 1$ operations suffice.
- **Complexity:**
  - **Time:** $O(N)$
  - **Space:** $O(1)$

#### 18. [Doremy's Paint 3](../solutions/cpp/DoremysPaint3.cpp)
- **Platform / Contest:** Codeforces 1890A
- **Tags:** Hash Map, Frequency Analysis, Constructive
- **Difficulty:** 800
- **Problem Statement:** Check if array elements can be arranged on a circle such that the sum of all adjacent pairs is constant.
- **Intuition & Strategy:** A constant sum of adjacent pairs implies the array can contain at most 2 distinct values $x$ and $y$. If 2 distinct values exist, their frequencies must differ by at most 1 ($|count(x) - count(y)| \le 1$).
- **Complexity:**
  - **Time:** $O(N)$
  - **Space:** $O(N)$

#### 19. [Forbidden Integer](../solutions/cpp/ForbiddenInteger.cpp)
- **Platform / Contest:** Codeforces 1845A
- **Tags:** Constructive Algorithms, Greedy, Math
- **Difficulty:** 800
- **Problem Statement:** Represent integer $n$ as a sum of positive integers $\le k$, none of which equal $x$.
- **Intuition & Strategy:** If $x \neq 1$, greedily use $n$ ones ($1 + 1 + \dots + 1$). If $x = 1$, we cannot use 1; if $k < 2$, impossible. If $k \ge 2$, use 2s for even $n$, or one 3 followed by 2s for odd $n$ (requiring $k \ge 3$).
- **Complexity:**
  - **Time:** $O(N)$
  - **Space:** $O(N)$

#### 20. [Goals of Victory](../solutions/cpp/GoalsOfVictory.cpp)
- **Platform / Contest:** Codeforces 1877A
- **Tags:** Math, Invariant Analysis
- **Difficulty:** 800
- **Problem Statement:** Given efficiency ratings of $n-1$ teams in a tournament where efficiency is total goals scored minus total goals conceded, find the $n$-th team's efficiency.
- **Intuition & Strategy:** Every goal scored by one team is conceded by another, so the sum of efficiencies over all $n$ teams must be zero ($\sum_{i=1}^n e_i = 0$). Hence, $e_n = -\sum_{i=1}^{n-1} e_i$.
- **Complexity:**
  - **Time:** $O(N)$
  - **Space:** $O(1)$

#### 21. [Grasshopper on a Line](../solutions/cpp/GrasshopperOnLine.cpp)
- **Platform / Contest:** Codeforces 1837A
- **Tags:** Constructive, Math
- **Difficulty:** 800
- **Problem Statement:** Reach point $x$ starting from $0$ with jumps not divisible by $k$, minimizing the number of jumps.
- **Intuition & Strategy:** If $x \not\equiv 0 \pmod k$, reach $x$ in 1 jump. If $x \equiv 0 \pmod k$, split into 2 jumps: $x - 1$ and $1$ (since $x-1 \not\equiv 0 \pmod k$ and $1 \not\equiv 0 \pmod k$ for $k > 1$).
- **Complexity:**
  - **Time:** $O(1)$
  - **Space:** $O(1)$

#### 22. [Halloumi Boxes](../solutions/cpp/HalloumiBoxes.cpp)
- **Platform / Contest:** Codeforces 1903A
- **Tags:** Sorting, Permutations, Invariants
- **Difficulty:** 800
- **Problem Statement:** You can reverse any subarray of length at most $k$. Can you sort the array?
- **Intuition & Strategy:** For $k \ge 2$, any adjacent pair can be swapped (bubble sort equivalent), so any array can be sorted. For $k = 1$, the array can only be sorted if it is already sorted.
- **Complexity:**
  - **Time:** $O(N)$
  - **Space:** $O(1)$

#### 23. [Jagged Swaps](../solutions/cpp/JaggedSwaps.cpp)
- **Platform / Contest:** Codeforces 1896A
- **Tags:** Permutations, Invariants
- **Difficulty:** 800
- **Problem Statement:** You can swap $a_i, a_{i+1}$ if $a_{i-1} < a_i > a_{i+1}$ ($1 < i < n$). Determine if the permutation can be sorted.
- **Intuition & Strategy:** The operation can never modify the first element $a_1$. For the permutation $[1 \dots n]$ to be sorted, the minimum element $1$ must be at $a_1$. If $a_1 = 1$, the remaining elements can always be sorted.
- **Complexity:**
  - **Time:** $O(N)$
  - **Space:** $O(1)$

#### 24. [Make It Beautiful](../solutions/cpp/MakeItBeautiful.cpp)
- **Platform / Contest:** Codeforces 1783A
- **Tags:** Constructive, Greedy, Sorting
- **Difficulty:** 800
- **Problem Statement:** Rearrange array $a$ so no element equals the sum of all preceding elements.
- **Intuition & Strategy:** Sort descending. If $a_1 = a_n$, all elements are equal (impossible). Otherwise, place the largest element first, the smallest element second, and remaining elements in descending order.
- **Complexity:**
  - **Time:** $O(N \log N)$
  - **Space:** $O(1)$

#### 25. [Neutral Tonality](../solutions/cpp/NeutralTonality.cpp)
- **Platform / Contest:** Codeforces 1898C / LIS Optimization
- **Tags:** Greedy, Two Pointers, LIS
- **Difficulty:** 1300
- **Problem Statement:** Insert all elements of array $b$ into array $a$ to minimize the Longest Increasing Subsequence (LIS) of the resulting array.
- **Intuition & Strategy:** Sort $b$ in descending order. Using two pointers, greedily place elements of $b$ that are $\ge a_i$ immediately before $a_i$. Descending order ensures inserted elements can never contribute to a longer increasing chain.
- **Complexity:**
  - **Time:** $O((N + M) \log M)$
  - **Space:** $O(N + M)$

#### 26. [Sequence Game](../solutions/cpp/SequenceGame.cpp)
- **Platform / Contest:** Codeforces 1862B
- **Tags:** Constructive Algorithms, Arrays
- **Difficulty:** 800
- **Problem Statement:** Reconstruct a valid sequence $a$ from a given filtered sequence $b$ where $b_i$ was recorded only if $a_i \ge a_{i-1}$.
- **Intuition & Strategy:** Start with $a = [b_1]$. For each subsequent $b_i$, if $b_i \ge b_{i-1}$, append $b_i$. If $b_i < b_{i-1}$, insert $b_i$ twice so the condition $a_k \ge a_{k-1}$ holds.
- **Complexity:**
  - **Time:** $O(N)$
  - **Space:** $O(N)$

#### 27. [Target Practice](../solutions/cpp/TargetPractice.cpp)
- **Platform / Contest:** Codeforces 1873C
- **Tags:** 2D Matrix, Geometry, Distance Metric
- **Difficulty:** 800
- **Problem Statement:** Calculate total score on a 10x10 archery target with 5 concentric scoring rings (1 to 5 points).
- **Intuition & Strategy:** The ring index of cell $(r, c)$ corresponds to its minimum distance from any of the four borders: $\min(r, 9-r, c, 9-c) + 1$.
- **Complexity:**
  - **Time:** $O(1)$ (constant 10x10 grid)
  - **Space:** $O(1)$

#### 28. [Twin Permutations](../solutions/cpp/TwinPermutations.cpp)
- **Platform / Contest:** Codeforces 1831A
- **Tags:** Permutations, Constructive
- **Difficulty:** 800
- **Problem Statement:** Given permutation $a$, construct permutation $b$ such that $a_1 + b_1 \le a_2 + b_2 \le \dots \le a_n + b_n$.
- **Intuition & Strategy:** Set $b_i = (n + 1) - a_i$. Then $a_i + b_i = n + 1$ for all $i$, making all sums identical and satisfying the non-decreasing requirement.
- **Complexity:**
  - **Time:** $O(N)$
  - **Space:** $O(N)$

#### 29. [Two Permutations](../solutions/cpp/TwoPermutations.cpp)
- **Platform / Contest:** Codeforces 1761A
- **Tags:** Constructive, Permutations
- **Difficulty:** 800
- **Problem Statement:** Check if two distinct permutations of length $n$ can have a longest common prefix of length $a$ and longest common suffix of length $b$.
- **Intuition & Strategy:** If $a = b = n$, both permutations are identical. Otherwise, the prefix and suffix cannot overlap or leave only 1 free position, requiring $a + b \le n - 2$.
- **Complexity:**
  - **Time:** $O(1)$
  - **Space:** $O(1)$

#### 30. [Unit Array](../solutions/cpp/UnitArray.cpp)
- **Platform / Contest:** Codeforces 1834A
- **Tags:** Greedy, Math, Parity
- **Difficulty:** 800
- **Problem Statement:** Given an array containing only $1$ and $-1$, find the minimum flips of $-1 \to 1$ such that the sum $\ge 0$ and the product $= 1$.
- **Intuition & Strategy:** Count $-1$s and $1$s. Flip $-1 \to 1$ until the count of $-1$s is $\le \lfloor n/2 \rfloor$. If the remaining count of $-1$s is odd (yielding product $-1$), perform one additional flip to ensure even parity.
- **Complexity:**
  - **Time:** $O(N)$
  - **Space:** $O(1)$

#### 31. [United We Stand](../solutions/cpp/UnitedWeStand.cpp)
- **Platform / Contest:** Codeforces 1859A
- **Tags:** Number Theory, Divisibility, Sorting
- **Difficulty:** 800
- **Problem Statement:** Partition array $a$ into non-empty arrays $b$ and $c$ such that no element of $b$ divides any element of $c$.
- **Intuition & Strategy:** Sort array $a$. If all elements are equal, impossible. Otherwise, place all occurrences of the maximum element into $c$, and all strictly smaller elements into $b$. A smaller element cannot be divisible by a strictly larger element.
- **Complexity:**
  - **Time:** $O(N \log N)$
  - **Space:** $O(N)$

---

### Math, Number Theory & Combinatorics

#### 32. [Coins](../solutions/cpp/Coins.cpp)
- **Platform / Contest:** Codeforces 1814A
- **Tags:** Math, Number Theory, Diophantine
- **Difficulty:** 800
- **Problem Statement:** Determine if total value $n$ can be paid using coins of denominations $2$ and $k$.
- **Intuition & Strategy:** $2x + ky = n$. If $n$ is even, $x = n/2, y = 0$ works. If $n$ is odd, we need $ky$ to be odd, which requires $k$ to be odd and $n \ge k$.
- **Complexity:**
  - **Time:** $O(1)$
  - **Space:** $O(1)$

#### 33. [Extremely Round](../solutions/cpp/ExtremlyRound.cpp)
- **Platform / Contest:** Codeforces 1766A
- **Tags:** Math, Combinatorics, Digit DP
- **Difficulty:** 800
- **Problem Statement:** Count integers $1 \le x \le n$ that have exactly one non-zero digit.
- **Intuition & Strategy:** An extremely round number has the form $d \cdot 10^k$ for $d \in \{1 \dots 9\}$. For a number with $L$ digits and leading digit $D$, total count is $9 \cdot (L - 1) + D$.
- **Complexity:**
  - **Time:** $O(\log_{10} N)$
  - **Space:** $O(1)$

#### 34. [Make AP](../solutions/cpp/MakeAP.cpp)
- **Platform / Contest:** Codeforces 1624B
- **Tags:** Math, Arithmetic Progression
- **Difficulty:** 900
- **Problem Statement:** Check if multiplying one of $a, b, c$ by a positive integer $m$ can form an arithmetic progression ($a, b, c$).
- **Intuition & Strategy:** Check three potential modifications:
  1. Fix $b, c$: $a' = 2b - c > 0$ and $a' \pmod a == 0$.
  2. Fix $a, c$: $b' = (a + c)/2$ integer and $b' \pmod b == 0$.
  3. Fix $a, b$: $c' = 2b - a > 0$ and $c' \pmod c == 0$.
- **Complexity:**
  - **Time:** $O(1)$
  - **Space:** $O(1)$

#### 35. [Serval and Mocha's Array](../solutions/cpp/ServalAndMochasArray.cpp)
- **Platform / Contest:** Codeforces 1789A
- **Tags:** Number Theory, GCD, Pairs
- **Difficulty:** 800
- **Problem Statement:** Can the array be reordered such that the prefix GCDs are $\le i$ for all prefixes of length $i$?
- **Intuition & Strategy:** Prefix GCD of length 2 must be $\le 2$. If there exists any pair $(a_i, a_j)$ with $\gcd(a_i, a_j) \le 2$, we can place them first and satisfy the condition for all subsequent elements.
- **Complexity:**
  - **Time:** $O(N^2 \log(\max A))$
  - **Space:** $O(1)$

#### 36. [One and Two](../solutions/cpp/OneAndTwo.cpp)
- **Platform / Contest:** Codeforces 1788A
- **Tags:** Math, Prefix Products, Factorization
- **Difficulty:** 800
- **Problem Statement:** Find index $k$ such that the product of elements $a_1 \dots a_k$ equals the product $a_{k+1} \dots a_n$.
- **Intuition & Strategy:** Array elements are only 1 or 2. Total product equality corresponds to having equal counts of 2s on both sides. If total count of 2s is odd, impossible; if even, find the prefix containing exactly half of the 2s.
- **Complexity:**
  - **Time:** $O(N)$
  - **Space:** $O(1)$

#### 37. [K-th Equality Construction](../solutions/cpp/KthEquality.cpp)
- **Tags:** Combinatorics, Math, Digit Ranges
- **Problem Statement:** Find the $k$-th lexicographical valid equation $A + B = C$ where $A, B, C$ have specified digit lengths $a, b, c$.
- **Intuition & Strategy:** Iterate possible values of $A \in [10^{a-1}, 10^a - 1]$. For each $A$, compute valid range of $B$ such that $A + B \in [10^{c-1}, 10^c - 1]$. Accumulate range counts to find the $k$-th solution.
- **Complexity:**
  - **Time:** $O(10^a)$
  - **Space:** $O(1)$

---

### Two Pointers, Binary Search & Arrays

#### 38. [Building an Aquarium](../solutions/cpp/BuildingAquarium.cpp)
- **Platform / Contest:** Codeforces 1873E
- **Tags:** Binary Search on Answer, Monotonicity
- **Difficulty:** 1100
- **Problem Statement:** Given coral column heights $a_1 \dots a_n$ and water budget $x$, find maximum height $h$ such that total water $\sum \max(0, h - a_i) \le x$.
- **Intuition & Strategy:** The water function $W(h)$ is strictly monotonically increasing with $h$. Binary search $h$ in range $[1, \max(a_i) + x]$.
- **Complexity:**
  - **Time:** $O(N \log(\text{range}))$
  - **Space:** $O(1)$

#### 39. [Three Parts of the Array](../solutions/cpp/ThreePartsOfArray.cpp)
- **Platform / Contest:** Codeforces 1006C
- **Tags:** Two Pointers, Prefix & Suffix Sums
- **Difficulty:** 1200
- **Problem Statement:** Partition array into three parts (prefix, middle, suffix) such that sum of prefix equals sum of suffix, maximizing this sum.
- **Intuition & Strategy:** Maintain two pointers $l = 0, r = n - 1$. If $\text{sum}_L < \text{sum}_R$, advance $l$; if $\text{sum}_L > \text{sum}_R$, decrement $r$; if equal, record the max sum and advance $l$.
- **Complexity:**
  - **Time:** $O(N)$
  - **Space:** $O(1)$

#### 40. [Prepend and Append](../solutions/cpp/PrependAndAppend.cpp)
- **Platform / Contest:** Codeforces 1791C
- **Tags:** Two Pointers, Strings
- **Difficulty:** 800
- **Problem Statement:** A string was generated by repeatedly prepending `0` and appending `1` (or vice versa). Find the minimum possible length of the initial string.
- **Intuition & Strategy:** Use two pointers from the outer ends inward. While $l < r$ and $s[l] \neq s[r]$, strip the outer characters. The remaining substring length $r - l + 1$ is the original string.
- **Complexity:**
  - **Time:** $O(N)$
  - **Space:** $O(1)$

#### 41. [Blank Space](../solutions/cpp/BlankSpace.cpp)
- **Platform / Contest:** Codeforces 1829B
- **Tags:** Arrays, Linear Scan
- **Difficulty:** 800
- **Problem Statement:** Find the length of the longest consecutive segment of zeros in a binary array.
- **Intuition & Strategy:** Single pass tracking the current consecutive zero streak and maintaining the global maximum.
- **Complexity:**
  - **Time:** $O(N)$
  - **Space:** $O(1)$

---

### Bit Manipulation & Game Theory

#### 42. [Buttons](../solutions/cpp/Buttons.cpp)
- **Platform / Contest:** Codeforces 1858A
- **Tags:** Game Theory, Parity
- **Difficulty:** 800
- **Problem Statement:** Anna has $a$ exclusive buttons, Katie has $b$ exclusive buttons, and $c$ buttons are shared. First player unable to press a button loses.
- **Intuition & Strategy:** Optimal play presses shared buttons first. If $c$ is odd, Anna gets one more shared button ($a + (c+1)/2 > b + c/2 \iff a + 1 > b \iff a \ge b$). If $c$ is even, Anna needs $a > b$.
- **Complexity:**
  - **Time:** $O(1)$
  - **Space:** $O(1)$

#### 43. [Game with Integers](../solutions/cpp/GameWithIntegers.cpp)
- **Platform / Contest:** Codeforces 1899A
- **Tags:** Game Theory, Modular Arithmetic
- **Difficulty:** 800
- **Problem Statement:** First player wins if they make $n$ divisible by 3 in 10 moves (adding/subtracting 1 each turn).
- **Intuition & Strategy:** If $n \equiv 0 \pmod 3$, any move makes it non-divisible and second player reverses it (Second wins). If $n \not\equiv 0 \pmod 3$, First adds/subtracts 1 on move 1 and immediately wins.
- **Complexity:**
  - **Time:** $O(1)$
  - **Space:** $O(1)$

#### 44. [XOR Game](../solutions/cpp/XORgame.cpp)
- **Tags:** Bit Manipulation, Parity, Game Theory
- **Problem Statement:** Determine winning strategy in an index-based XOR mismatch elimination game.
- **Intuition & Strategy:** Count odd/even bitwise mismatches and evaluate player turn parity.
- **Complexity:**
  - **Time:** $O(N)$
  - **Space:** $O(1)$

#### 45. [Odd-Core Heapify Permutations](../solutions/cpp/Heapify1.cpp)
- **Tags:** Group Theory, Bitwise Decomposition
- **Problem Statement:** Validate if permutation transitions preserve invariant odd-core coset equivalence classes ($x / 2^{\text{ctz}(x)}$).
- **Intuition & Strategy:** Group array values by odd cores; verify relative set inclusion.
- **Complexity:**
  - **Time:** $O(N \log N)$
  - **Space:** $O(N)$

---

### Strings & Geometry

#### 46. [Don't Try to Count](../solutions/cpp/DontTryToCount.cpp)
- **Platform / Contest:** Codeforces 1881A
- **Tags:** Strings, Brute Force, Doubling
- **Difficulty:** 800
- **Problem Statement:** Find minimum operations of $x \leftarrow x + x$ so string $s$ contains $s$ as a substring.
- **Intuition & Strategy:** Double $x$ at most 5-6 times until $|x| \ge 2 \cdot |s|$. Check substring containment using standard `string::find`.
- **Complexity:**
  - **Time:** $O(|x| \cdot |s|)$
  - **Space:** $O(|x|)$

#### 47. [Abbreviation Feasibility](../solutions/cpp/Abbrevation.cpp)
- **Tags:** Strings, Greedy Search
- **Problem Statement:** Verify character availability for target abbreviation matches.
- **Complexity:**
  - **Time:** $O(N + M)$
  - **Space:** $O(1)$

---

## Java Solutions

#### 1. [Array Coloring](../solutions/java/ArrayColoring.java)
- **Platform / Contest:** Codeforces 1857A
- **Tags:** Math, Parity Analysis
- **Difficulty:** 800
- **Problem Statement:** Determine if array elements can be colored in two colors such that the sum of elements in both colors has the same parity (both even or both odd).
- **Intuition & Strategy:** Sum of two integers of the same parity is always even. Thus, total sum must be even, which occurs if and only if the count of odd numbers in the array is even.
- **Complexity:**
  - **Time:** $O(N)$
  - **Space:** $O(1)$

#### 2. [Beautiful Matrix](../solutions/java/BeautifulMatrix.java)
- **Platform / Contest:** Codeforces 263A
- **Tags:** Matrix, Manhattan Distance
- **Difficulty:** 800
- **Problem Statement:** Find minimum moves to bring the single `1` in a 5x5 matrix to the center position $(3, 3)$.
- **Intuition & Strategy:** Manhattan distance formula: $|r - 3| + |c - 3|$.
- **Complexity:**
  - **Time:** $O(1)$ (5x5 matrix)
  - **Space:** $O(1)$

#### 3. [Theatre Square](../solutions/java/TheatreSquare.java)
- **Platform / Contest:** Codeforces 1A
- **Tags:** Math, Geometry Tiling
- **Difficulty:** 1000
- **Problem Statement:** Pave a rectangular square $n \times m$ with square flagstones of size $a \times a$.
- **Intuition & Strategy:** Calculate ceiling division independently along length and width: $\lceil n/a \rceil \cdot \lceil m/a \rceil = \lfloor (n + a - 1)/a \rfloor \cdot \lfloor (m + a - 1)/a \rfloor$.
- **Complexity:**
  - **Time:** $O(1)$
  - **Space:** $O(1)$

#### 4. [Odd One Out](../solutions/java/OddOneOut.java)
- **Platform / Contest:** Codeforces 1915A
- **Tags:** Bitwise XOR
- **Difficulty:** 800
- **Problem Statement:** Given three digits $a, b, c$ where two are equal, find the unique one.
- **Intuition & Strategy:** Using XOR property $x \oplus x = 0$ and $x \oplus 0 = x$: $a \oplus b \oplus c$.
- **Complexity:**
  - **Time:** $O(1)$
  - **Space:** $O(1)$

#### 5. [Submatrix Sum (2D Prefix Sums)](../solutions/java/SubmatrixSum.java)
- **Tags:** 2D Prefix Sums, Inclusion-Exclusion
- **Problem Statement:** Answer multiple 2D submatrix sum queries on an $R \times C$ grid in $O(1)$ time per query.
- **Intuition & Strategy:** Build 2D prefix table $P[i][j] = A[i][j] + P[i-1][j] + P[i][j-1] - P[i-1][j-1]$. Query rectangle $(r_1, c_1)$ to $(r_2, c_2)$ via inclusion-exclusion.
- **Complexity:**
  - **Time:** $O(R \cdot C)$ precomputation, $O(1)$ per query
  - **Space:** $O(R \cdot C)$

#### 6. [Strange Machine (Binary Lifting)](../solutions/java/StrangeMachine.java)
- **Tags:** Binary Lifting, Memoization, DP
- **Problem Statement:** Simulate state transitions across operational powers to determine steps until reaching termination state.
- **Complexity:**
  - **Time:** $O(Q \log(\max A))$
  - **Space:** $O(N \log(\max A))$

#### 7. [Bitwise Reversion](../solutions/java/BitwiseReversion.java)
- **Tags:** Bit Manipulation, Bitwise Constraints
- **Problem Statement:** Validate bit pattern configuration across three bitwise variables.
- **Complexity:**
  - **Time:** $O(32) = O(1)$
  - **Space:** $O(1)$

#### 8. [Circle of Apples](../solutions/java/CircleOfApples.java)
- **Tags:** Hash Sets, Distinct Element Counting
- **Complexity:**
  - **Time:** $O(N)$
  - **Space:** $O(N)$

#### 9. [Pizza Time](../solutions/java/PizzaTime.java)
- **Tags:** Combinatorics, Integer Division
- **Complexity:**
  - **Time:** $O(1)$
  - **Space:** $O(1)$

#### 10. [Unconventional Pairs](../solutions/java/UnconventionalPairs.java)
- **Tags:** Sorting, Greedy Pairing
- **Complexity:**
  - **Time:** $O(N \log N)$
  - **Space:** $O(N)$
