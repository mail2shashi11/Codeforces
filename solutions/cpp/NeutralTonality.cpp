#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;

        vector<long long> a(n), b(m);
        for (auto &x : a) cin >> x;
        for (auto &x : b) cin >> x;

        // Sort b in descending order
        sort(b.begin(), b.end(), greater<long long>());

        vector<long long> result;
        int j = 0;

        // Merge greedily
        for (int i = 0; i < n; i++) {
            while (j < m && b[j] >= a[i]) {
                result.push_back(b[j]);
                j++;
            }
            result.push_back(a[i]);
        }

        // Append remaining b elements
        while (j < m) {
            result.push_back(b[j]);
            j++;
        }

        // Output
        for (auto x : result)
            cout << x << " ";
        cout << "\n";
    }

    return 0;
}
