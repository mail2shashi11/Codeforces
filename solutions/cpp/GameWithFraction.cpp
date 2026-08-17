#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    for (int test = 0; test < t; ++test) {
        long long p, q;
        cin >> p >> q;
        if (3 * p == 2 * q) {
            cout << "Bob\n";
            continue;
        }
        int a = p % 3;
        int b = q % 3;
        if ((a == 1 && b == 2) || (a == 2 && b == 0)) {
            cout << "Bob\n";
        } else {
            cout << "Alice\n";
        }
    }
    return 0;
}
