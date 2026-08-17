#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

typedef long long ll;

const ll INF = 1e18;

void solve() {
    int n, k;
    cin >> n >> k;
    vector<ll> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    // dp[i][j] is the min sum of first i elements using j operations
    vector<vector<ll>> dp(n + 1, vector<ll>(k + 1, INF));
    
    dp[0][0] = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= k; j++) {
            if (dp[i][j] == INF) continue;

            // Option 1: Don't start a block here, just take a[i] as is
            dp[i + 1][j] = min(dp[i + 1][j], dp[i][j] + a[i]);

            // Option 2: Start a block of length 'len' starting at index i
            // The cost is len - 1 operations.
            ll min_val = a[i];
            for (int len = 2; i + len <= n && j + len - 1 <= k; len++) {
                min_val = min(min_val, a[i + len - 1]);
                dp[i + len][j + len - 1] = min(dp[i + len][j + len - 1], dp[i][j] + len * min_val);
            }
        }
    }

    ll ans = INF;
    for (int j = 0; j <= k; j++) {
        ans = min(ans, dp[n][j]);
    }
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