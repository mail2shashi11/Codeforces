#include <iostream>
#include <vector>

using namespace std;

/**
 * Problem 1862B - Sequence Game
 * Strategy: If b[i] < b[i-1], insert b[i] twice to force it 
 * into the shortened sequence.
 */

void solve() {
    int n;
    cin >> n;
    vector<int> b(n);
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }

    vector<int> a;
    // The first element is always included
    a.push_back(b[0]);

    for (int i = 1; i < n; i++) {
        if (b[i] >= b[i - 1]) {
            // Non-decreasing, just add it
            a.push_back(b[i]);
        } else {
            // Decreasing, insert an extra element (b[i]) 
            // to satisfy the condition a[i] >= a[i-1]
            a.push_back(b[i]);
            a.push_back(b[i]);
        }
    }

    // Output the reconstructed sequence
    cout << a.size() << "\n";
    for (int i = 0; i < a.size(); i++) {
        cout << a[i] << (i == a.size() - 1 ? "" : " ");
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