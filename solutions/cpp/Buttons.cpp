#include <iostream>

using namespace std;

/**
 * Problem 1858A - Buttons
 * Strategy: Parity of shared buttons determines the advantage.
 */

void solve() {
    long long a, b, c;
    cin >> a >> b >> c;

    // If c is odd, Anna effectively gets one extra button 
    // because she goes first.
    if (c % 2 != 0) {
        // Anna gets the extra shared button
        if (a + 1 > b) {
            cout << "First" << endl;
        } else {
            cout << "Second" << endl;
        }
    } else {
        // c is even, shared buttons cancel out
        if (a > b) {
            cout << "First" << endl;
        } else {
            cout << "Second" << endl;
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