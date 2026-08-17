#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

typedef long long ll;

bool can_build(const vector<ll>& a, ll h, ll x) {
    ll total_water = 0;
    for (ll coral : a) {
        if (h > coral) {
            total_water += (h - coral);
        }
        // Optimization: break early if we exceed x to avoid overflow
        if (total_water > x) return false;
    }
    return total_water <= x;
}

void solve() {
    int n;
    ll x;
    cin >> n >> x;
    vector<ll> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    ll low = 1, high = 2000000000; // 2e9
    ll ans = 1;

    while (low <= high) {
        ll mid = low + (high - low) / 2;
        if (can_build(a, mid, x)) {
            ans = mid;
            low = mid + 1;
        } else {
            high = mid - 1;
        }
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