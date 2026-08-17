#include <iostream>
#include <vector>

using namespace std;

/**
 * Problem 1845A - Forbidden Integer
 * Strategy: Case analysis based on whether 1 is forbidden.
 */

void solve() {
    int n, k, x;
    cin >> n >> k >> x;

    if (x != 1) {
        // We can just use 'n' ones
        cout << "YES" << endl;
        cout << n << endl;
        for (int i = 0; i < n; i++) cout << 1 << (i == n - 1 ? "" : " ");
        cout << endl;
    } else {
        // x == 1, so we can't use 1.
        if (k == 1) {
            // Only 1 was available, but it's forbidden
            cout << "NO" << endl;
        } else if (n % 2 == 0) {
            // n is even, use n/2 twos
            cout << "YES" << endl;
            cout << n / 2 << endl;
            for (int i = 0; i < n / 2; i++) cout << 2 << (i == (n / 2) - 1 ? "" : " ");
            cout << endl;
        } else if (k >= 3 && n >= 3) {
            // n is odd, use one 3 and the rest twos
            cout << "YES" << endl;
            cout << 1 + (n - 3) / 2 << endl;
            cout << 3;
            for (int i = 0; i < (n - 3) / 2; i++) cout << " " << 2;
            cout << endl;
        } else {
            // n is odd but we can't use 3 or n < 3
            cout << "NO" << endl;
        }
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