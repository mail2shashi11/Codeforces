#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

typedef long long ll;

void solve() {
    int A, B, C;
    ll k;
    cin >> A >> B >> C >> k;

    // Calculate ranges for a, b, and c
    ll min_a = pow(10, A - 1);
    ll max_a = pow(10, A) - 1;
    ll min_b = pow(10, B - 1);
    ll max_b = pow(10, B) - 1;
    ll min_c = pow(10, C - 1);
    ll max_c = pow(10, C) - 1;

    for (ll a = min_a; a <= max_a; ++a) {
        // For a fixed 'a', b must satisfy:
        // 1. min_b <= b <= max_b
        // 2. min_c <= a + b <= max_c  =>  min_c - a <= b <= max_c - a
        
        ll L = max(min_b, min_c - a);
        ll R = min(max_b, max_c - a);

        if (L <= R) {
            ll count = R - L + 1;
            if (k <= count) {
                ll b = L + k - 1;
                ll c = a + b;
                cout << a << " + " << b << " = " << c << "\n";
                return;
            }
            k -= count;
        }
    }

    cout << -1 << "\n";
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