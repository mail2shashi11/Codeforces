#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

/**
 * Problem 1006C - Three Parts of the Array
 * Strategy: Two Pointers
 */

void solve() {
    int n;
    cin >> n;
    vector<long long> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    long long max_sum = 0;
    long long sum_left = 0;
    long long sum_right = 0;

    int l = 0;
    int r = n - 1;

    // Use two pointers to find equal prefix and suffix sums
    while (l <= r) {
        if (sum_left <= sum_right) {
            sum_left += a[l];
            l++;
        } else {
            sum_right += a[r];
            r--;
        }

        if (sum_left == sum_right) {
            max_sum = sum_left;
        }
    }

    cout << max_sum << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}