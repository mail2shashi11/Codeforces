#include <iostream>

using namespace std;

void solve() {
    int n;
    cin >> n;

    // If n is already a multiple of 3, Vanya's first move 
    // will make it not a multiple of 3, and Vova can 
    // keep it that way.
    if (n % 3 == 0) {
        cout << "Second" << endl;
    } else {
        // If n is not a multiple of 3, Vanya can add or 
        // subtract 1 to make it a multiple of 3 immediately.
        cout << "First" << endl;
    }
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