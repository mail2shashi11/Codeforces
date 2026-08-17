#include <iostream>
#include <vector>

using namespace std;

/**
 * Problem 1831A - Twin Permutations
 * Strategy: Complement each element relative to (n + 1)
 */

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++) {
        // Output the complement: (n + 1) - a[i]
        cout << (n + 1) - a[i] << (i == n - 1 ? "" : " ");
    }
    cout << "\n";
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