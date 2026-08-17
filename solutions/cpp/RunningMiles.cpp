#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

/**
 * Problem 1826D - Running Miles
 * Strategy: Maximize (b_i + i) + b_j + (b_k - k)
 */

void solve() {
    int n;
    cin >> n;
    vector<int> b(n);
    for (int i = 0; i < n; i++) cin >> b[i];

    // pref[i] will store the max value of (b[x] + x) for x <= i
    vector<int> pref(n);
    for (int i = 0; i < n; i++) {
        pref[i] = b[i] + i;
        if (i > 0) pref[i] = max(pref[i], pref[i - 1]);
    }

    // suff[i] will store the max value of (b[x] - x) for x >= i
    vector<int> suff(n);
    for (int i = n - 1; i >= 0; i--) {
        suff[i] = b[i] - i;
        if (i < n - 1) suff[i] = max(suff[i], suff[i + 1]);
    }

    int max_beauty = 0;
    // Iterate through j as the middle element (must have one element on each side)
    for (int j = 1; j < n - 1; j++) {
        int current_beauty = pref[j - 1] + b[j] + suff[j + 1];
        max_beauty = max(max_beauty, current_beauty);
    }

    cout << max_beauty << "\n";
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