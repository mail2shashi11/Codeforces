#include <iostream>
#include <string>

using namespace std;

/**
 * Problem 1881A - Don't Try to Count
 * Strategy: Repeatedly double string s and check if n is a substring.
 * Max operations needed is small (around 5-6).
 */

void solve() {
    int n_len, m_len;
    cin >> n_len >> m_len;
    string x, s;
    cin >> x >> s;

    // We only need a few operations because the length grows exponentially.
    // 2^5 * 25 is already 800, which is plenty.
    for (int ops = 0; ops <= 5; ops++) {
        // Find if s is a substring of x
        if (x.find(s) != string::npos) {
            cout << ops << "\n";
            return;
        }
        // Double the string x
        x += x;
    }

    cout << -1 << "\n";
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