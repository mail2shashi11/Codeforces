#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

/**
 * Problem 1866A - Ambition Analysis
 * Strategy: Find the minimum absolute value in the array.
 */

void solve() {
    int n;
    if (!(cin >> n)) return;
    
    int min_ops = 2e9; // Initialize with a large value

    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        // The operations needed to make 'a' zero is its distance from 0
        min_ops = min(min_ops, abs(a));
    }

    cout << min_ops << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // This problem typically has only 1 test case per run based on its ID
    solve();
    
    return 0;
}