#include <iostream>
#include <vector>

using namespace std;

/**
 * Problem 1896A - Jagged Swaps
 * Strategy: The first element cannot be moved. 
 * For a permutation to be sorted, the first element must be 1.
 */

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    // Since the operation is only for 1 < i < n (using 1-based indexing),
    // the first element a[0] can never be swapped or changed.
    // In a sorted permutation of 1 to n, the first element must be 1.
    if (a[0] == 1) {
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