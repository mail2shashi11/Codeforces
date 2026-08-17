#include <bits/stdc++.h>
using namespace std;

struct Interval {
    long long L, R;
    int cnt;
};

vector<Interval> mergeIntervals(vector<Interval>& v) {
    if (v.empty()) return {};
    vector<long long> pts;
    for (auto &it : v) {
        pts.push_back(it.L);
        pts.push_back(it.R + 1);
    }
    sort(pts.begin(), pts.end());
    pts.erase(unique(pts.begin(), pts.end()), pts.end());
    
    vector<int> seg(pts.size() - 1, -1e9);
    for (auto &it : v) {
        int l = lower_bound(pts.begin(), pts.end(), it.L) - pts.begin();
        int r = lower_bound(pts.begin(), pts.end(), it.R + 1) - pts.begin();
        for (int i = l; i < r; i++)
            seg[i] = max(seg[i], it.cnt);
    }
    
    vector<Interval> res;
    for (int i = 0; i < (int)seg.size(); ) {
        if (seg[i] < -1e8) { i++; continue; }
        int j = i;
        while (j + 1 < (int)seg.size() && seg[j + 1] == seg[i]) j++;
        res.push_back({pts[i], pts[j + 1] - 1, seg[i]});
        i = j + 1;
    }
    return res;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        long long R0, X;
        int D, n;
        cin >> R0 >> X >> D >> n;
        string s; 
        cin >> s;
        
        vector<Interval> cur = {{R0, R0, 0}};
        for (char c : s) {
            vector<Interval> nxt;
            for (auto &it : cur) {
                long long L = it.L, R = it.R;
                int cnt = it.cnt;
                if (c == '1') {
                    nxt.push_back({max(0LL, L - D), R + D, cnt + 1});
                } else {
                    if (L < X) {  // part < X: rated
                        long long aL = L, aR = min(R, X - 1);
                        nxt.push_back({max(0LL, aL - D), aR + D, cnt + 1});
                    }
                    if (R >= X) { // part >= X: unrated
                        long long bL = max(L, X), bR = R;
                        nxt.push_back({bL, bR, cnt});
                    }
                }
            }
            cur = mergeIntervals(nxt);
            if (cur.empty()) break;
        }
        
        int ans = 0;
        for (auto &it : cur) ans = max(ans, it.cnt);
        cout << ans << "\n";
    }
    return 0;
}
