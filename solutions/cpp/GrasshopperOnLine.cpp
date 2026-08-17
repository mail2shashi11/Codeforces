#include <iostream>

using namespace std;

/**
 * Problem 1837A - Grasshopper on a Line
 * Strategy: Check divisibility of n by k. 
 * If not divisible, 1 jump. If divisible, 2 jumps.
 */

void solve() {
    int n, k;
    cin >> n >> k;

    if (n % k != 0) {
        // Case 1: n is not divisible by k
        cout << 1 << "\n";
        cout << n << "\n";
    } else {
        // Case 2: n is divisible by k
        // Jump to n-1, then jump 1.
        cout << 2 << "\n";
        cout << n - 1 << " " << 1 << "\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}