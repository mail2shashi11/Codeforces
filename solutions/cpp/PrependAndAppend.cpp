#include <iostream>
#include <string>

using namespace std;

/**
 * Problem 1791C - Prepend and Append
 * Strategy: Two pointers shrinking from both ends as long 
 * as characters are different (0 and 1).
 */

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    int l = 0, r = n - 1;
    int current_len = n;

    while (l < r) {
        // If the outer characters are different, they were 
        // added in the same operation.
        if (s[l] != s[r]) {
            l++;
            r--;
            current_len -= 2;
        } else {
            // If they are the same, the original string 
            // started here.
            break;
        }
    }

    cout << current_len << "\n";
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