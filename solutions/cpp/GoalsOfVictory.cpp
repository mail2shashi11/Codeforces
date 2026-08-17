#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

/**
 * Problem 1877A - Goals of Victory
 * Strategy: The sum of all efficiencies must be 0.
 * Missing = -(sum of given efficiencies)
 */

void solve() {
    int n;
    cin >> n;
    
    int sum_efficiencies = 0;
    // We are given n-1 efficiencies
    for (int i = 0; i < n - 1; i++) {
        int a;
        cin >> a;
        sum_efficiencies += a;
    }

    // Since sum + x = 0, then x = -sum
    cout << -sum_efficiencies << endl;
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