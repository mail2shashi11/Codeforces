#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
void solve() {
    string s;
    cin >> s;
    long long c_sum = 0;
    vector<int> dec;
    for (int i = 0; i < s.length(); ++i) {
        int d = s[i] - '0';
        c_sum += d;
        if (i == 0) {
            dec.push_back(max(0, d - 1));
        } else {
            dec.push_back(d);
        }
    }
    
    if (c_sum <= 9) {
        cout << 0 << endl;
        return;
    }
    sort(dec.rbegin(), dec.rend());
    
    int m = 0;
    for (int d : dec) {
        c_sum -= d;
        m++;
        if (c_sum <= 9) {
            cout << m << endl;
            return;
        }
    }
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}