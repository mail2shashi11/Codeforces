#include <iostream>
using namespace std;
void solve() {
    int n, m, d;
    if (!(cin >> n >> m >> d)) return;
    int cap = (d / m) + 1;
    int tow = (n + cap - 1) / cap;
    
    cout << tow << endl;
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}