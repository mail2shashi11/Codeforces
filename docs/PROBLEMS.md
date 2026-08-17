# Problem Index

This index explains the purpose of each source file at a glance. Complexity notes describe the implementation style in the repository.

Note: to compile & run any solution by its filename (without extension) use the provided runner script from Windows PowerShell:

```powershell
.\run.bat ProblemName < input.txt
```

## C++ Solutions

| Source | Problem / Program | Core idea | Complexity | Run |
| --- | --- | --- | --- | --- |
| [012Tree.cpp](../solutions/cpp/012Tree.cpp) | Codeforces 1950F - 0, 1, 2-Tree | A valid tree needs `leaves = two-child nodes + 1`; simulate level slots with a queue to find minimum height. | `O(a + b + c)` | `.\run.bat 012Tree < input.txt` |
| [Abbrevation.cpp](../solutions/cpp/Abbrevation.cpp) | Abbreviation feasibility | Store available first letters, then verify every required abbreviation character exists. | `O(total characters)` | `.\run.bat Abbrevation < input.txt` |
| [Absolutecinema.cpp](../solutions/cpp/Absolutecinema.cpp) | Absolute Cinema style reconstruction | Recover middle values from second differences, then solve the two endpoints from the boundary equations. | `O(n)` | `.\run.bat Absolutecinema < input.txt` |
| [AmbitionKid.cpp](../solutions/cpp/AmbitionKid.cpp) | Codeforces 1866A - Ambitious Kid | The answer is the minimum distance of any array value from zero. | `O(n)` | `.\run.bat AmbitionKid < input.txt` |
| [AnotherBeautifulPairs.cpp](../solutions/cpp/AnotherBeautifulPairs.cpp) | Beautiful pair counting | Count valid indexed pairs by iterating small candidate values and checking the product/index relation directly. | About `O(n sqrt n)` | `.\run.bat AnotherBeautifulPairs < input.txt` |
| [ArrayAndPermutation.cpp](../solutions/cpp/ArrayAndPermutation.cpp) | Array and permutation subsequence check | Compress adjacent duplicates in the target array, then check whether that compressed sequence appears in the permutation order. | `O(n)` | `.\run.bat ArrayAndPermutation < input.txt` |
| [AVL.cpp](../solutions/cpp/AVL.cpp) | AVL tree demo | Insert values into a self-balancing AVL tree, rotate on imbalance, and print traversals/tree shape. | `O(log n)` per insert | `.\run.bat AVL < input.txt` |
| [beautifulNumbers.cpp](../solutions/cpp/beautifulNumbers.cpp) | Beautiful number digit reduction | Sum digits, sort possible digit reductions, and greedily reduce the largest contributions until the digit sum is at most 9. | `O(d log d)` | `.\run.bat beautifulNumbers < input.txt` |
| [BlankSpace.cpp](../solutions/cpp/BlankSpace.cpp) | Codeforces 1829B - Blank Space | Scan once while tracking the current and maximum zero streak. | `O(n)` | `.\run.bat BlankSpace < input.txt` |
| [BST.cpp](../solutions/cpp/BST.cpp) | Binary search tree demo | Insert input values into a BST and print standard traversals. | `O(h)` per insert | `.\run.bat BST < input.txt` |
| [BuildingAquarium.cpp](../solutions/cpp/BuildingAquarium.cpp) | Building an Aquarium | Binary search the largest feasible water height under the water budget. | `O(n log H)` | `.\run.bat BuildingAquarium < input.txt` |
| [Buttons.cpp](../solutions/cpp/Buttons.cpp) | Codeforces 1858A - Buttons | Shared buttons only matter by parity; if the shared count is odd, the first player gets the extra move. | `O(1)` | `.\run.bat Buttons < input.txt` |
| [Coins.cpp](../solutions/cpp/Coins.cpp) | Codeforces 1814A - Coins | Even totals are always possible; odd totals require the special coin value to be odd. | `O(1)` | `.\run.bat Coins < input.txt` |
| [CoverInWater.cpp](../solutions/cpp/CoverInWater.cpp) | Codeforces 1900A - Cover in Water | Three consecutive dots cap the answer at 2; otherwise count every dot. | `O(n)` | `.\run.bat CoverInWater < input.txt` |
| [DaytonaCost.cpp](../solutions/cpp/DaytonaCost.cpp) | Codeforces 1878A - How Much Does Daytona Cost? | A one-element subarray works exactly when `k` appears in the array. | `O(n)` | `.\run.bat DaytonaCost < input.txt` |
| [Desorting.cpp](../solutions/cpp/Desorting.cpp) | Codeforces 1853A - Desorting | Already unsorted arrays need 0 moves; otherwise the smallest adjacent gap determines the first break point. | `O(n)` | `.\run.bat Desorting < input.txt` |
| [DiceRollSeq.cpp](../solutions/cpp/DiceRollSeq.cpp) | Dice roll sequence cleanup | Dynamic programming over dice faces, avoiding equal adjacent faces and opposite-face pairs. | `O(36n)` | `.\run.bat DiceRollSeq < input.txt` |
| [DontTryToCount.cpp](../solutions/cpp/DontTryToCount.cpp) | Codeforces 1881A - Don't Try to Count | Repeatedly double the string a small number of times and test substring containment. | `O(m * attempts)` | `.\run.bat DontTryToCount < input.txt` |
| [DoremysPaint3.cpp](../solutions/cpp/DoremysPaint3.cpp) | Codeforces 1890A - Doremy's Paint 3 | The multiset is valid if it has one value, or two values with nearly equal frequencies. | `O(n log n)` | `.\run.bat DoremysPaint3 < input.txt` |
| [ExtremlyRound.cpp](../solutions/cpp/ExtremlyRound.cpp) | Codeforces 1766A - Extremely Round | Count 9 one-nonzero-digit numbers for each shorter length, then add the leading digit. | `O(d)` | `.\run.bat ExtremlyRound < input.txt` |
| [farmlegs.cpp](../solutions/cpp/farmlegs.cpp) | Farm legs count | Odd totals are impossible; even totals map directly to the number of valid leg combinations. | `O(1)` | `.\run.bat farmlegs < input.txt` |
| [FlipBinary.cpp](../solutions/cpp/FlipBinary.cpp) | Binary index selection | Choose all `1` positions if their count is even; otherwise choose all `0` positions when that gives a valid odd set. | `O(n)` | `.\run.bat FlipBinary < input.txt` |
| [ForbiddenInteger.cpp](../solutions/cpp/ForbiddenInteger.cpp) | Codeforces 1845A - Forbidden Integer | If `1` is allowed, use all ones; otherwise build the sum from twos and possibly one three. | `O(n)` output | `.\run.bat ForbiddenInteger < input.txt` |
| [friendlyNumbers.cpp](../solutions/cpp/friendlyNumbers.cpp) | Friendly numbers | Use the divisibility-by-9 property, then brute-force the small candidate window and test digit sums. | `O(100 * digits)` | `.\run.bat friendlyNumbers < input.txt` |
| [GameWithFraction.cpp](../solutions/cpp/GameWithFraction.cpp) | Fraction game | Decide the winner from a direct equality case and residue classes modulo 3. | `O(1)` | `.\run.bat GameWithFraction < input.txt` |
| [GameWithIntegers.cpp](../solutions/cpp/GameWithIntegers.cpp) | Game with integers | Multiples of 3 are losing for the first player; all other values can move to a multiple of 3. | `O(1)` | `.\run.bat GameWithIntegers < input.txt` |
| [gcdArray.cpp](../solutions/cpp/gcdArray.cpp) | GCD array candidate | Try small primes and pick the first candidate coprime with at least one array value. | `O(25n)` | `.\run.bat gcdArray < input.txt` |
| [Gigantomachy.cpp](../solutions/cpp/Gigantomachy.cpp) | Gigantomachy comparison | Compare each side's first value plus its army size and print the stronger side. | `O(n + m)` input | `.\run.bat Gigantomachy < input.txt` |
| [GoalsOfVictory.cpp](../solutions/cpp/GoalsOfVictory.cpp) | Codeforces 1877A - Goals of Victory | The missing efficiency is the negative sum of the known efficiencies. | `O(n)` | `.\run.bat GoalsOfVictory < input.txt` |
| [GrasshopperOnLine.cpp](../solutions/cpp/GrasshopperOnLine.cpp) | Codeforces 1837A - Grasshopper on a Line | If `n` is not divisible by `k`, jump once; otherwise split into `n - 1` and `1`. | `O(1)` | `.\run.bat GrasshopperOnLine < input.txt` |
| [HalloumiBoxes.cpp](../solutions/cpp/HalloumiBoxes.cpp) | Codeforces 1903A - Halloumi Boxes | Already sorted arrays work; otherwise any `k >= 2` gives enough flexibility to sort. | `O(n)` | `.\run.bat HalloumiBoxes < input.txt` |
| [Heapify1.cpp](../solutions/cpp/Heapify1.cpp) | Index class permutation check | Group indices by their odd core after dividing by powers of two; values must stay inside matching groups. | `O(n log n)` | `.\run.bat Heapify1 < input.txt` |
| [IdiotFirstSearch.cpp](../solutions/cpp/IdiotFirstSearch.cpp) | Binary tree traversal timing | Precompute subtree traversal times, then propagate parent-side waiting time to every node. | `O(n)` | `.\run.bat IdiotFirstSearch < input.txt` |
| [JaggedSwaps.cpp](../solutions/cpp/JaggedSwaps.cpp) | Codeforces 1896A - Jagged Swaps | The first element cannot move, so a sortable permutation must start with 1. | `O(n)` input | `.\run.bat JaggedSwaps < input.txt` |
| [KthEquality.cpp](../solutions/cpp/KthEquality.cpp) | Codeforces 1712A-style kth equality construction | Iterate possible `a` values, count the valid `b` interval, and subtract blocks until the kth equation is found. | `O(10^A)` | `.\run.bat KthEquality < input.txt` |
| [LineTrip.cpp](../solutions/cpp/LineTrip.cpp) | Codeforces 1901A - Line Trip | The fuel tank must cover the largest internal gap and twice the final return gap. | `O(n)` | `.\run.bat LineTrip < input.txt` |
| [Magnitude.cpp](../solutions/cpp/Magnitude.cpp) | Magnitude DP | Track both maximum and minimum reachable running values, plus counts of ways to reach the maximum modulo `998244353`. | `O(n)` | `.\run.bat Magnitude < input.txt` |
| [MakeAP.cpp](../solutions/cpp/MakeAP.cpp) | Codeforces 1624B - Make AP | Try changing each of `a`, `b`, or `c` into a positive multiple that forms an arithmetic progression. | `O(1)` | `.\run.bat MakeAP < input.txt` |
| [makeConnected.cpp](../solutions/cpp/makeConnected.cpp) | Grid connection validator | Reject any run of three black cells, then BFS through safe cells that can be painted without creating such a run. | `O(n^2)` | `.\run.bat makeConnected < input.txt` |
| [MakeItBeautiful.cpp](../solutions/cpp/MakeItBeautiful.cpp) | Codeforces 1783A - Make it Beautiful | Sort descending and swap in a smaller second value unless all values are equal. | `O(n log n)` | `.\run.bat MakeItBeautiful < input.txt` |
| [MinAbsSum.cpp](../solutions/cpp/MinAbsSum.cpp) | Minimum endpoint absolute difference | Fill unknown endpoints to minimize `abs(first - last)` and use zero for irrelevant middle unknowns. | `O(n)` | `.\run.bat MinAbsSum < input.txt` |
| [MinimizingSum.cpp](../solutions/cpp/MinimizingSum.cpp) | Minimizing sum with operations | DP over prefixes and operation count; each chosen block contributes its length times the block minimum. | `O(nk^2)` | `.\run.bat MinimizingSum < input.txt` |
| [names.cpp](../solutions/cpp/names.cpp) | Name/anagram check | Sort both strings and compare them. | `O(n log n)` | `.\run.bat names < input.txt` |
| [NeutralTonality.cpp](../solutions/cpp/NeutralTonality.cpp) | Neutral Tonality | Sort the second list descending and greedily merge larger values before each element of the first list. | `O((n + m) log m)` | `.\run.bat NeutralTonality < input.txt` |
| [OneAndTwo.cpp](../solutions/cpp/OneAndTwo.cpp) | Codeforces 1788A - One and Two | The split exists only when the count of twos is even; find the point with half the twos. | `O(n)` | `.\run.bat OneAndTwo < input.txt` |
| [ParabolaIndepend.cpp](../solutions/cpp/ParabolaIndepend.cpp) | Parabola independence | Use discriminants to detect non-intersection, sort intersection events, then apply LIS-style processing. | `O(n^2 log n)` | `.\run.bat ParabolaIndepend < input.txt` |
| [PrependAndAppend.cpp](../solutions/cpp/PrependAndAppend.cpp) | Codeforces 1791C - Prepend and Append | Shrink both ends while the outer characters differ; the remaining length is the original core. | `O(n)` | `.\run.bat PrependAndAppend < input.txt` |
| [prod67.cpp](../solutions/cpp/prod67.cpp) | Contains 67 | Print YES when the array contains the value `67`. | `O(n)` | `.\run.bat prod67 < input.txt` |
| [roundTrip.cpp](../solutions/cpp/roundTrip.cpp) | Rating round trip intervals | Maintain reachable rating intervals and merge them after each contest decision, keeping the best rated count. | Interval-dependent | `.\run.bat roundTrip < input.txt` |
| [RunningMiles.cpp](../solutions/cpp/RunningMiles.cpp) | Codeforces 1826D - Running Miles | Precompute best left `b[i] + i` and right `b[k] - k`, then test every middle point. | `O(n)` | `.\run.bat RunningMiles < input.txt` |
| [SequenceGame.cpp](../solutions/cpp/SequenceGame.cpp) | Codeforces 1862B - Sequence Game | Rebuild a valid sequence by duplicating elements at each decreasing transition. | `O(n)` | `.\run.bat SequenceGame < input.txt` |
| [ServalAndMochasArray.cpp](../solutions/cpp/ServalAndMochasArray.cpp) | Codeforces 1789A - Serval and Mocha's Array | Check whether any pair has GCD at most 2. | `O(n^2 log A)` | `.\run.bat ServalAndMochasArray < input.txt` |
| [SpyingOnTheBeaver.cpp](../solutions/cpp/SpyingOnTheBeaver.cpp) | Tree camera placement | Tree DP computes minimum selected nodes, then reconstructs which cameras/cuts to output. | `O(n)` | `.\run.bat SpyingOnTheBeaver < input.txt` |
| [Squares.cpp](../solutions/cpp/Squares.cpp) | Four equal values | A square is valid only when all four side values match. | `O(1)` | `.\run.bat Squares < input.txt` |
| [StringGame.cpp](../solutions/cpp/StringGame.cpp) | Rotation block count | Try every rotation and count adjacent-character blocks, keeping the maximum. | `O(n^2)` | `.\run.bat StringGame < input.txt` |
| [SubArray.cpp](../solutions/cpp/SubArray.cpp) | Subarray product demo | Brute-force all subarrays in a fixed example and count products below 100. | `O(n^3)` | `.\run.bat SubArray < input.txt` |
| [TargetPractice.cpp](../solutions/cpp/TargetPractice.cpp) | Codeforces 1873C - Target Practice | Each `X` scores by its minimum distance from an edge plus one. | `O(100)` | `.\run.bat TargetPractice < input.txt` |
| [ThreePartsOfArray.cpp](../solutions/cpp/ThreePartsOfArray.cpp) | Codeforces 1006C - Three Parts of the Array | Two pointers grow prefix/suffix sums and record the largest equal sum. | `O(n)` | `.\run.bat ThreePartsOfArray < input.txt` |
| [towerboxes.cpp](../solutions/cpp/towerboxes.cpp) | Tower boxes | Compute how many boxes each tower can cover, then take the ceiling number of towers needed. | `O(1)` | `.\run.bat towerboxes < input.txt` |
| [TwinPermutations.cpp](../solutions/cpp/TwinPermutations.cpp) | Codeforces 1831A - Twin Permutations | Replace each value `x` by its complement `n + 1 - x`. | `O(n)` | `.\run.bat TwinPermutations < input.txt` |
| [TwoPermutations.cpp](../solutions/cpp/TwoPermutations.cpp) | Codeforces 1761A - Two Permutations | Exact prefix/suffix constraints either cover everything or need at least two free middle positions. | `O(1)` | `.\run.bat TwoPermutations < input.txt` |
| [UnitArray.cpp](../solutions/cpp/UnitArray.cpp) | Codeforces 1834A - Unit Array | Flip `-1`s until the sum is nonnegative, then ensure an even count of `-1`s. | `O(n)` | `.\run.bat UnitArray < input.txt` |
| [UnitedWeStand.cpp](../solutions/cpp/UnitedWeStand.cpp) | United We Stand | Sort and split maximum values into one group and all smaller values into the other. | `O(n log n)` | `.\run.bat UnitedWeStand < input.txt` |
| [XORgame.cpp](../solutions/cpp/XORgame.cpp) | XOR game winner | Count mismatches by odd/even positions and compare which player controls more mismatches. | `O(n)` | `.\run.bat XORgame < input.txt` |

## Java Solutions

| Source | Problem / Program | Core idea | Complexity | Run |
| --- | --- | --- | --- | --- |
| [ArrayColoring.java](../solutions/java/ArrayColoring.java) | Array Coloring | The array can be colored when the number of odd values is even. | `O(n)` | `.\run.bat ArrayColoring < input.txt` |
| [BeautifulMatrix.java](../solutions/java/BeautifulMatrix.java) | Codeforces 263A - Beautiful Matrix | Find the `1` in a 5x5 matrix and compute its Manhattan distance from the center. | `O(25)` | `.\run.bat BeautifulMatrix < input.txt` |
| [BitwiseReversion.java](../solutions/java/BitwiseReversion.java) | Bitwise reversion check | Inspect each bit of `x`, `y`, and `z` and reject forbidden 2-of-3 set-bit patterns. | `O(31)` | `.\run.bat BitwiseReversion < input.txt` |
| [CircleOfApples.java](../solutions/java/CircleOfApples.java) | Circle of Apples | Count distinct values with a set. | `O(n)` | `.\run.bat CircleOfApples < input.txt` |
| [OddOneOut.java](../solutions/java/OddOneOut.java) | Odd One Out | Among three values where two match, print the unique one. | `O(1)` | `.\run.bat OddOneOut < input.txt` |
| [PizzaTime.java](../solutions/java/PizzaTime.java) | Pizza Time | Apply the direct formula for the maximum slices Hao can eat. | `O(1)` | `.\run.bat PizzaTime < input.txt` |
| [StrangeMachine.java](../solutions/java/StrangeMachine.java) | Strange Machine | Use binary lifting with memoization over positions and operation powers to count steps until a value reaches zero. | About `O(q log A)` | `.\run.bat StrangeMachine < input.txt` |
| [SubmatrixSum.java](../solutions/java/SubmatrixSum.java) | 2D prefix-sum demo | Build a 2D prefix matrix and answer rectangle-sum queries with inclusion-exclusion. | `O(rc + q)` | `.\run.bat SubmatrixSum < input.txt` |
| [TheatreSquare.java](../solutions/java/TheatreSquare.java) | Codeforces 1A - Theatre Square | Multiply the ceiling number of flagstones needed along each dimension. | `O(1)` | `.\run.bat TheatreSquare < input.txt` |
| [UnconventionalPairs.java](../solutions/java/UnconventionalPairs.java) | Unconventional Pairs | Sort values, pair adjacent elements, and return the maximum pair difference. | `O(n log n)` | `.\run.bat UnconventionalPairs < input.txt` |

## Visualizers

| Source | Purpose |
| --- | --- |
| [avl_visualizer.html](../visualizers/avl_visualizer.html) | Interactive AVL tree visualizer with insert, delete, traversal, node height, and tree printing controls. |
| [rbt_visualizer.html](../visualizers/rbt_visualizer.html) | Interactive red-black tree visualizer with insert, delete, search, traversals, black-height, and tree printing controls. |
