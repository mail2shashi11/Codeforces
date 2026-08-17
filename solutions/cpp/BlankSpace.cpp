#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

/**
 * Problem 1829B - Blank Space
 * Strategy: Linear scan with a running counter
 */

void solve() {
    int n;
    cin >> n;
    
    int max_blank = 0;
    int current_blank = 0;
    
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        
        if (a == 0) {
            // Found a zero, increase current streak
            current_blank++;
        } else {
            // Found a one, update the global maximum and reset streak
            max_blank = max(max_blank, current_blank);
            current_blank = 0;
        }
    }
    
    // Final check for the case where the longest streak is at the end
    max_blank = max(max_blank, current_blank);
    
    cout << max_blank << "\n";
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