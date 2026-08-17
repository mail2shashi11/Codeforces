#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    vector<long long> primes = {
        2,3,5,7,11,13,17,19,23,29,
        31,37,41,43,47,53,59,61,67,71,
        73,79,83,89,97
    };
    while (t--) {
        int n;
        cin >> n;
        vector<long long> a(n);
        for (auto &x : a) cin >> x;
        long long ans = -1;
        for (long long p : primes) {
            for (long long x : a) {
                if (__gcd(p, x) == 1) {
                    ans = p;
                    break;
                }
            }
            if (ans != -1) break;
        }
        if (ans == -1) {
            ans = a[0] + 1; 
        }
        cout << ans << "\n";
    }
}
