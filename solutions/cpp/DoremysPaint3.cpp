#include <iostream>
#include <vector>
#include <map>
#include <cmath>

using namespace std;

/**
 * Problem 1890A - Doremy's Paint 3
 * Strategy: Check if there are at most 2 unique numbers 
 * and if their frequencies are balanced.
 */

void solve() {
    int n;
    cin >> n;
    map<int, int> counts;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        counts[x]++;
    }

    if (counts.size() == 1) {
        // All numbers are the same
        cout << "Yes" << endl;
    } else if (counts.size() == 2) {
        // Two unique numbers, check if their counts differ by at most 1
        vector<int> freq;
        for (const auto& pair : counts) {
    freq.push_back(pair.second);
}
        
        if (abs(freq[0] - freq[1]) <= 1) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    } else {
        // More than 2 unique numbers
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