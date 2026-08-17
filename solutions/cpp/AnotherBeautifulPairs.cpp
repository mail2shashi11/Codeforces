#include <iostream>
#include <vector>
using namespace std;
void solve() {
    int n;
    cin >> n;
    vector<int> a(n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    long long c = 0;
    for (int v1 = 1; v1 * v1 <= 2 * n; v1++) {
        for (int i = 1; i <= n; i++) {
            if (a[i] == v1) {
                for (int v2 = 1; ; v2++) {
                    long long j = (long long)v1 * v2 + i;
                    if (j > n) break;       
                    if (a[j] == v2) {
                        c++;
                    }
                }
            }
        }
    }
    cout << c << "\n";
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