#include <iostream>
#include <vector>

using namespace std;

/**
 * Problem 1834A - Unit Array
 * Strategy: Greedy adjustment of -1s to 1s
 */

void solve() {
    int n;
    cin >> n;
    int pos = 0, neg = 0;
    
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (x == 1) pos++;
        else neg++;
    }

    int operations = 0;

    // Condition 1: Sum must be >= 0 (pos >= neg)
    while (neg > pos) {
        neg--;
        pos++;
        operations++;
    }

    // Condition 2: Product must be 1 (neg must be even)
    if (neg % 2 != 0) {
        operations++;
        // We don't need to actually update neg/pos here 
        // as this is the final check.
    }

    cout << operations << "\n";
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