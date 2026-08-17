#include <iostream>
#include <string>

using namespace std;

/**
 * Problem 1766A - Extremely Round
 * Strategy: Count 9 numbers for every full power of 10, 
 * plus the leading digit of the final partial power.
 */

void solve() {
    string n_str;
    cin >> n_str;

    // Number of full 9-sets is (digits - 1)
    int digits = n_str.length();
    
    // The first digit of n tells us how many extremely round 
    // numbers exist in the current power of 10.
    // Example: n = 432 -> first digit is 4 (100, 200, 300, 400)
    int first_digit = n_str[0] - '0';

    int ans = (digits - 1) * 9 + first_digit;
    
    cout << ans << "\n";
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