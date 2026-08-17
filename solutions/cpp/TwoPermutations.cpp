#include <iostream>

using namespace std;

/**
 * Problem 1761A - Two Permutations
 * Strategy: Check if the prefix and suffix can coexist.
 * Either they cover the whole array (a=b=n) or they leave 
 * at least 2 elements to be different in the middle.
 */

void solve() {
    int n, a, b;
    cin >> n >> a >> b;

    // Case 1: The permutations are identical
    if (a == n && b == n) {
        cout << "Yes" << endl;
        return;
    }

    // Case 2: We need at least 2 elements in the middle to 
    // ensure the prefix and suffix lengths are EXACTLY a and b.
    // This means n - (a + b) >= 2
    if (a + b <= n - 2) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
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