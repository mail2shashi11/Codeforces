#include <bits/stdc++.h>
using namespace std;
using ll = long long;

/*
 Two parabolas f and g are independent iff
 (b1-b2)^2 - 4*(a1-a2)*(c1-c2) < 0
*/

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<ll> a(n), b(n), c(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i] >> b[i] >> c[i];
        }

        vector<int> answer(n);

        for (int i = 0; i < n; i++) {
            int always_ok = 0;
            vector<pair<long double, int>> events;

            for (int j = 0; j < n; j++) {
                if (i == j) continue;

                ll A = a[i] - a[j];
                ll B = b[i] - b[j];
                ll C = c[i] - c[j];

                ll D = B * B - 4LL * A * C;

                // No real intersection -> always independent
                if (D < 0) {
                    always_ok++;
                } else {
                    // Compute intersection x-coordinate
                    long double x;
                    if (A != 0) {
                        x = (- (long double)B) / (2.0L * (long double)A);
                    } else {
                        // Linear case
                        x = - (long double)C / (long double)B;
                    }

                    // Sign indicates which side f_i is above
                    int sign;
                    if (A > 0) sign = 1;
                    else sign = -1;

                    events.push_back({x, sign});
                }
            }

            // Sort by intersection point
            sort(events.begin(), events.end());

            // LIS on sign changes
            vector<int> dp;
            for (auto &e : events) {
                int val = e.second;
                auto it = lower_bound(dp.begin(), dp.end(), val);
                if (it == dp.end()) dp.push_back(val);
                else *it = val;
            }

            answer[i] = 1 + always_ok + (int)dp.size();
        }

        for (int i = 0; i < n; i++) {
            cout << answer[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
