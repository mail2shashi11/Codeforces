#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>

using namespace std;

/**
 * GCD helper function (standard in C++17 as std::gcd)
 */
int get_gcd(int a, int b) {
    while (b) {
        a %= b;
        swap(a, b);
    }
    return a;
}

/**
 * Problem 1789A - Serval and Mocha's Array
 * Strategy: Check if any pair in the array has GCD <= 2.
 */

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    bool possible = false;

    // Check all possible pairs (i, j)
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (get_gcd(a[i], a[j]) <= 2) {
                possible = true;
                break;
            }
        }
        if (possible) break;
    }

    if (possible) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
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