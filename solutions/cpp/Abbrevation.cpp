#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;

    vector<bool> available(26, false);
    for (int i = 0; i < n; ++i) {
        string w;
        cin >> w;
        available[toupper(w[0]) - 'A'] = true;
    }

    bool possible = true;
    for (int i = 0; i < m; ++i) {
        string a;
        cin >> a;
        for (char c : a) {
            if (!available[c - 'A']) {
                possible = false;
            }
        }
    }

    if (possible) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}