#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

/**
 * Problem 1873C - Target Practice
 * Strategy: Calculate points based on the distance from the nearest edge.
 */

void solve() {
    int total_points = 0;
    
    for (int r = 0; r < 10; r++) {
        string row;
        cin >> row;
        for (int c = 0; c < 10; c++) {
            if (row[c] == 'X') {
                // Calculate distance from the nearest of the four edges
                // Coordinates are 0-indexed (0 to 9)
                int dist_r = min(r, 9 - r);
                int dist_c = min(c, 9 - c);
                
                // Points = min distance + 1
                // E.g., edge (0,0) -> min(0,0) + 1 = 1 point
                // E.g., center (4,4) -> min(4,4) + 1 = 5 points
                total_points += (min(dist_r, dist_c) + 1);
            }
        }
    }
    
    cout << total_points << "\n";
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