#include <iostream>
#include <vector>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> p(n);
        for (int i = 0; i < n; i++) {
            cin >> p[i];
        }
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        vector<int> cd;
        if (n > 0) {
            cd.push_back(a[0]);
            for (int i = 1; i < n; i++) {
                if (a[i] != a[i - 1]) {
                    cd.push_back(a[i]);
                }
            }
        }
        int pi = 0;
        int ci = 0;
        while (pi < n && ci < cd.size()) {
            if (p[pi] == cd[ci]) {
                ci++;
            }
            pi++;
        }
        if (ci == cd.size()) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}