#include <iostream>

using namespace std;

/**
 * Problem 1814A - Coins
 * Strategy: Check parity. If n is odd, k must be odd to reach it.
 */

void solve() {
    long long n, k;
    cin >> n >> k;

    // Logic: 
    // If n is even, we can use only 2-burle coins.
    // If n is odd, we need k to be odd so that (n - k) is even.
    if (n % 2 == 0) {
        cout << "YES" << endl;
    } else if (k % 2 != 0) {
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