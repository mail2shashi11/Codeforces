#include <iostream>
#include <vector>

using namespace std;

/**
 * Problem 1878A - How Much Does Daytona Cost?
 * Strategy: If k exists in the array, a subarray of size 1 
 * makes k the most frequent element.
 */

void solve() {
    int n, k;
    cin >> n >> k;
    
    bool found = false;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (x == k) {
            found = true;
        }
    }

    if (found) {
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