#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

/**
 * Problem 1900A - Cover in Water
 * Strategy: Look for 3 consecutive dots for an infinite source.
 */

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    int total_dots = 0;
    bool three_consecutive = false;
    int current_streak = 0;

    for (int i = 0; i < n; i++) {
        if (s[i] == '.') {
            total_dots++;
            current_streak++;
            if (current_streak >= 3) {
                three_consecutive = true;
            }
        } else {
            current_streak = 0;
        }
    }

    if (three_consecutive) {
        // If we find "...", we only need 2 operations to fill everything
        cout << 2 << "\n";
    } else {
        // Otherwise, we must fill every dot manually
        cout << total_dots << "\n";
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