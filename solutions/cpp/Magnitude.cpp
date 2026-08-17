#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

long long MOD = 998244353;

void solve() {
    int n;
    cin >> n;
    vector<long long> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    // dp[i] stores {value, number_of_ways}
    // we only need the previous state, so we use two pairs
    vector<pair<long long, long long>> mx(n + 1), mn(n + 1);

    mx[0] = {0, 1};
    mn[0] = {0, 1};

    for (int i = 0; i < n; i++) {
        vector<pair<long long, long long>> candidates;
        
        // Options from previous Max
        candidates.push_back({mx[i].first + a[i], mx[i].second});
        candidates.push_back({abs(mx[i].first + a[i]), mx[i].second});
        
        // Options from previous Min
        candidates.push_back({mn[i].first + a[i], mn[i].second});
        candidates.push_back({abs(mn[i].first + a[i]), mn[i].second});

        long long current_max = -2e18, current_min = 2e18;
        for (auto &p : candidates) {
            current_max = max(current_max, p.first);
            current_min = min(current_min, p.first);
        }

        long long cnt_max = 0, cnt_min = 0;
        
        // Unique candidates to avoid double counting if mx == mn
        // We use a helper to sum ways for the new max and min
        auto aggregate = [&](long long target) {
            long long total = 0;
            // From prev max
            if (mx[i].first + a[i] == target) total = (total + mx[i].second) % MOD;
            if (abs(mx[i].first + a[i]) == target) total = (total + mx[i].second) % MOD;
            
            // If mn and mx were different, add mn's contributions
            if (mn[i].first != mx[i].first) {
                if (mn[i].first + a[i] == target) total = (total + mn[i].second) % MOD;
                if (abs(mn[i].first + a[i]) == target) total = (total + mn[i].second) % MOD;
            }
            return total;
        };

        mx[i + 1] = {current_max, aggregate(current_max)};
        mn[i + 1] = {current_min, aggregate(current_min)};
    }

    cout << mx[n].second << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}