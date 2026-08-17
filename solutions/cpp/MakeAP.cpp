#include <iostream>

using namespace std;

/**
 * Problem 1624B - Make AP
 * Strategy: Check if modifying a, b, or c results in a valid AP.
 */

void solve() {
    long long a, b, c;
    cin >> a >> b >> c;

    // Case 1: Try to modify 'a'
    // new_a + c = 2b  =>  new_a = 2b - c
    long long new_a = 2 * b - c;
    if (new_a > 0 && new_a % a == 0) {
        cout << "YES" << endl;
        return;
    }

    // Case 2: Try to modify 'b'
    // a + c = 2 * new_b  =>  new_b = (a + c) / 2
    if ((a + c) % 2 == 0) {
        long long new_b = (a + c) / 2;
        if (new_b > 0 && new_b % b == 0) {
            cout << "YES" << endl;
            return;
        }
    }

    // Case 3: Try to modify 'c'
    // a + new_c = 2b  =>  new_c = 2b - a
    long long new_c = 2 * b - a;
    if (new_c > 0 && new_c % c == 0) {
        cout << "YES" << endl;
        return;
    }

    cout << "NO" << endl;
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