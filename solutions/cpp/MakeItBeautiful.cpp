#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

/**
 * Problem 1783A - Make it Beautiful
 * Strategy: Sort descending and swap the second element 
 * with the last to prevent a[1] == a[0].
 */

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    // Sort in descending order
    sort(a.rbegin(), a.rend());

    // If the first two are the same, the only way to fix it 
    // is to bring a smaller element to the second position.
    if (a[0] == a[1]) {
        swap(a[1], a[n - 1]);
    }

    // After the swap, if the first two are still the same, 
    // it means all elements are identical.
    if (a[0] == a[1]) {
        cout << "NO" << endl;
    } else {
        cout << "YES" << endl;
        for (int i = 0; i < n; i++) {
            cout << a[i] << (i == n - 1 ? "" : " ");
        }
        cout << endl;
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