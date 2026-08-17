#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<string> g(n);
        for (int i = 0; i < n; i++) cin >> g[i];

        int blackCount = 0;
        bool bad = false;

        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                if (g[i][j] == '#') blackCount++;

        if (blackCount == 0) {
            cout << "YES\n";
            continue;
        }

        for (int i = 0; i < n; i++) {
            int cnt = 0;
            for (int j = 0; j < n; j++) {
                if (g[i][j] == '#') cnt++;
                else cnt = 0;
                if (cnt >= 3) bad = true;
            }
        }

        for (int j = 0; j < n; j++) {
            int cnt = 0;
            for (int i = 0; i < n; i++) {
                if (g[i][j] == '#') cnt++;
                else cnt = 0;
                if (cnt >= 3) bad = true;
            }
        }

        if (bad) {
            cout << "NO\n";
            continue;
        }

        vector<vector<int>> vis(n, vector<int>(n, 0));
        int si = -1, sj = -1;
        for (int i = 0; i < n && si == -1; i++)
            for (int j = 0; j < n; j++)
                if (g[i][j] == '#') { si = i; sj = j; break; }

        queue<pair<int, int>> q;
        q.push({si, sj});
        vis[si][sj] = 1;

        int di[4] = {1, -1, 0, 0};
        int dj[4] = {0, 0, 1, -1};

        while (!q.empty()) {
            int i = q.front().first;
            int j = q.front().second;
            q.pop();

            for (int d = 0; d < 4; d++) {
                int ni = i + di[d], nj = j + dj[d];
                if (ni < 0 || ni >= n || nj < 0 || nj >= n) continue;
                if (vis[ni][nj]) continue;

                if (g[ni][nj] == '#') {
                    vis[ni][nj] = 1;
                    q.push({ni, nj});
                } else {
                    bool okPaint = true;

                    int cntl = 0;
                    for (int x = nj - 2; x <= nj + 2; x++) {
                        if (x < 0 || x >= n) continue;
                        if (x == nj) cntl++;
                        else if (g[ni][x] == '#') cntl++;
                        else cntl = 0;
                        if (cntl >= 3) { okPaint = false; break; }
                    }

                    if (!okPaint) continue;

                    int cntv = 0;
                    for (int x = ni - 2; x <= ni + 2; x++) {
                        if (x < 0 || x >= n) continue;
                        if (x == ni) cntv++;
                        else if (g[x][nj] == '#') cntv++;
                        else cntv = 0;
                        if (cntv >= 3) { okPaint = false; break; }
                    }

                    if (!okPaint) continue;

                    g[ni][nj] = '#';
                    vis[ni][nj] = 1;
                    q.push({ni, nj});
                }
            }
        }

        bool allVisited = true;
        for (int i = 0; i < n && allVisited; i++)
            for (int j = 0; j < n; j++)
                if (g[i][j] == '#' && !vis[i][j]) {
                    allVisited = false;
                    break;
                }

        cout << (allVisited ? "YES\n" : "NO\n");
    }
    return 0;
}
