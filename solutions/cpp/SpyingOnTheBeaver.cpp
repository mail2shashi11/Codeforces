#include <bits/stdc++.h>
using namespace std;

const long long INF = 1e9;

void solve() {
    int n;
    cin >> n;

    vector<int> p(n + 1);
    vector<vector<int>> children(n + 1);
    for (int i = 2; i <= n; ++i) {
        cin >> p[i];
        children[p[i]].push_back(i);
    }

    int m;
    cin >> m;
    vector<bool> is_dam(n + 1, false);
    for (int i = 0; i < m; ++i) {
        int a;
        cin >> a;
        is_dam[a] = true;
    }

    vector<long long> dp0(n + 1, 0), dp1(n + 1, 0);
    vector<bool> cut_choice(n + 1, false);
    vector<int> best_child(n + 1, -1);

    for (int u = n; u >= 1; --u) {
        if (is_dam[u]) {
            dp0[u] = INF;
            long long sum_cost0 = 0;
            for (int v : children[u]) {
                long long c0 = cut_choice[v] ? (1 + dp1[v]) : dp0[v];
                sum_cost0 += c0;
            }
            dp1[u] = sum_cost0;
        } else {
            long long sum_cost0 = 0;
            long long min_diff = INF;
            int best = -1;

            for (int v : children[u]) {
                long long c0 = cut_choice[v] ? (1 + dp1[v]) : dp0[v];
                sum_cost0 += c0;
                long long diff = dp1[v] - c0;
                if (diff < min_diff) {
                    min_diff = diff;
                    best = v;
                }
            }

            dp0[u] = sum_cost0;
            if (best != -1 && min_diff < INF / 2) {
                dp1[u] = sum_cost0 + min_diff;
                best_child[u] = best;
            } else {
                dp1[u] = INF;
            }
        }

        if (1 + dp1[u] <= dp0[u]) {
            cut_choice[u] = true;
        } else {
            cut_choice[u] = false;
        }
    }

    vector<int> chosen_state(n + 1, -1);
    chosen_state[1] = (dp1[1] <= dp0[1]) ? 1 : 0;

    vector<int> cameras;

    for (int u = 1; u <= n; ++u) {
        int st = chosen_state[u];
        if (st == 0) {
            for (int v : children[u]) {
                if (cut_choice[v]) {
                    cameras.push_back(v);
                    chosen_state[v] = 1;
                } else {
                    chosen_state[v] = 0;
                }
            }
        } else {
            if (is_dam[u]) {
                for (int v : children[u]) {
                    if (cut_choice[v]) {
                        cameras.push_back(v);
                        chosen_state[v] = 1;
                    } else {
                        chosen_state[v] = 0;
                    }
                }
            } else {
                int star = best_child[u];
                for (int v : children[u]) {
                    if (v == star) {
                        chosen_state[v] = 1;
                    } else {
                        if (cut_choice[v]) {
                            cameras.push_back(v);
                            chosen_state[v] = 1;
                        } else {
                            chosen_state[v] = 0;
                        }
                    }
                }
            }
        }
    }

    cout << cameras.size();
    for (int v : cameras) {
        cout << " " << v;
    }
    cout << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}