#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n + 1);
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
        }
        unordered_map<int, vector<int>> pos, val;
        for (int i = 1; i <= n; i++) {
            int root = i;
            while (root % 2 == 0) root /= 2; 
            pos[root].push_back(i);
            val[root].push_back(a[i]);
        }
        bool ok = true;
        for (auto &it : pos) {
            auto &p = it.second;
            auto &v = val[it.first];
            sort(p.begin(), p.end());
            sort(v.begin(), v.end());
            if (p != v) {
                ok = false;
                break;
            }
        }
        cout << (ok ? "YES\n" : "NO\n");
    }
    return 0;
}
