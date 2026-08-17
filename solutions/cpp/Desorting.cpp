#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

/**
 * Problem 1853A - Desorted
 * Strategy: Find the minimum gap between adjacent elements.
 * Each operation reduces that gap by 2.
 */

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    int min_diff = 2e9; // Initialize with a large value

    for (int i = 0; i < n - 1; i++) {
        // If it's already not sorted, answer is 0
        if (a[i] > a[i + 1]) {
            cout << 0 << "\n";
            return;
        }
        min_diff = min(min_diff, a[i + 1] - a[i]);
    }

    // min_diff is the gap. We need to close it.
    // gap of 0 -> needs 1 op to make a[i] > a[i+1]
    // gap of 1 -> needs 1 op to make a[i] > a[i+1]
    // gap of 2 -> needs 2 ops to make a[i] > a[i+1]
    cout << (min_diff / 2) + 1 << "\n";
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