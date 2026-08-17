#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    sort(a.begin(), a.end());

    // If the smallest and largest elements are the same, 
    // all elements are the same, and we can't form two non-empty arrays.
    if (a[0] == a[n - 1]) {
        cout << -1 << "\n";
        return;
    }

    vector<int> b, c;
    int max_val = a[n - 1];
    
    // Move everything equal to the maximum to c, others to b
    for (int x : a) {
        if (x == max_val) {
            c.push_back(x);
        } else {
            b.push_back(x);
        }
    }

    cout << b.size() << " " << c.size() << "\n";
    for (int i = 0; i < b.size(); i++) cout << b[i] << (i == b.size() - 1 ? "" : " ");
    cout << "\n";
    for (int i = 0; i < c.size(); i++) cout << c[i] << (i == c.size() - 1 ? "" : " ");
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