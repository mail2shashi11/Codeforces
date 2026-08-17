#include <iostream>
#include <queue>

using namespace std;

/**
 * Problem 1950F - 0, 1, 2-Tree
 * Strategy: BFS-like level simulation to minimize height.
 */

void solve() {
    int a, b, c;
    cin >> a >> b >> c;

    // Condition for a valid 0,1,2-tree: leaves = nodes_with_2_children + 1
    if (c != a + 1) {
        cout << -1 << "\n";
        return;
    }

    if (a + b + c == 1) {
        cout << 0 << "\n";
        return;
    }

    // We use a queue to store the level of each available slot
    // Initially, the root is at level 0
    queue<int> q;
    q.push(0);
    
    int max_height = 0;

    // Place all 'a' nodes first (they increase branching the most)
    while (a > 0) {
        int level = q.front();
        q.pop();
        max_height = max(max_height, level + 1);
        q.push(level + 1);
        q.push(level + 1);
        a--;
    }

    // Place all 'b' nodes (they maintain current branch count)
    while (b > 0) {
        int level = q.front();
        q.pop();
        max_height = max(max_height, level + 1);
        q.push(level + 1);
        b--;
    }

    // Finally, the leaves 'c' just fill the remaining slots in the queue
    // We only need to check the level of the last leaf placed
    while (c > 0) {
        int level = q.front();
        q.pop();
        max_height = max(max_height, level);
        c--;
    }

    cout << max_height << "\n";
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