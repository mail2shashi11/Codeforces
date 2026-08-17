#include <iostream>
#include <vector>

using namespace std;

/**
 * Problem 1788A - One and Two
 * Strategy: Count the total number of 2s. The split point must 
 * have half of the 2s on the left and half on the right.
 */

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    int total_twos = 0;
    
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] == 2) total_twos++;
    }

    // If total twos is odd, we can never split them equally
    if (total_twos % 2 != 0) {
        cout << -1 << "\n";
        return;
    }

    // If there are no twos, any k works; smallest k is 1
    if (total_twos == 0) {
        cout << 1 << "\n";
        return;
    }

    int current_twos = 0;
    int target = total_twos / 2;

    for (int k = 0; k < n; k++) {
        if (a[k] == 2) current_twos++;
        
        if (current_twos == target) {
            // k is 0-indexed, the problem asks for 1-indexed split point
            cout << k + 1 << "\n";
            return;
        }
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