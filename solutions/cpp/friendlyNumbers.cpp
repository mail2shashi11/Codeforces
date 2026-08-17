#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        long long x;
        cin >> x;

        if (x % 9 != 0) {
            cout << 0 << "\n";
            continue;
        }

        int count = 0;
        for (long long y = x; y <= x + 100; ++y) {
            long long ty = y;
            long long ds = 0;
            while (ty > 0) {
                ds += ty % 10;
                ty /= 10;
            }

            if (y - ds == x) {
                count++;
            }
        }
        cout << count << "\n";
    }
    return 0;
}