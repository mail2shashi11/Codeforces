#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

/**
 * Problem 1903A - Halloumi Boxes
 * Strategy: If k >= 2, we can sort anything (like bubble sort).
 * If k = 1, the array must already be sorted.
 */

void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    // Check if the array is already sorted
    bool sorted = true;
    for (int i = 0; i < n - 1; i++) {
        if (a[i] > a[i + 1]) {
            sorted = false;
            break;
        }
    }

    // If it's already sorted, k doesn't matter.
    // If not sorted, we need at least k = 2 to move elements.
    if (sorted || k >= 2) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
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