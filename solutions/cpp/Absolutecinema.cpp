#include <iostream>
#include <vector>

using namespace std;
void solve() {
    int n;
    if (!(cin >> n)) return;
    vector<long long> f(n + 1);
    for (int i = 1; i <= n; ++i) {
        cin >> f[i];
    }
    if (n == 2) {
        cout << f[2] << " " << f[1] << endl;
        return;
    }
    vector<long long> a(n + 1, 0);
    for (int i = 2; i < n; ++i) {
        a[i] = (f[i-1] - 2 * f[i] + f[i+1]) / 2;
    }
    long long current_f1_sum = 0;
    for (int i = 2; i < n; ++i) {
        current_f1_sum += a[i] * (i - 1);
    }
    a[n] = (f[1] - current_f1_sum) / (n - 1);
    long long current_fn_sum = 0;
    for (int i = 2; i <= n; ++i) {
        current_fn_sum += a[i] * (n - i);
    }
    a[1] = (f[n] - current_fn_sum) / (n - 1);
    for (int i = 1; i <= n; ++i) {
        cout << a[i] << (i == n ? "" : " ");
    }
    cout << "\n";
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