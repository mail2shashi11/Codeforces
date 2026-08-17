#include <iostream>
#include <vector>

using namespace std;

long long MOD = 1e9 + 7;

struct Node {
    int l, r, p;
};

vector<Node> tree;
vector<long long> subtree_time; // Time to fully traverse subtree and return
vector<long long> ans;

// Precompute the time to exhaust a subtree rooted at u
void compute_subtree_time(int u) {
    if (tree[u].l == 0) {
        subtree_time[u] = 0; // It takes 0 time to "finish" a leaf once you are there
        return;
    }
    compute_subtree_time(tree[u].l);
    compute_subtree_time(tree[u].r);
    
    // Time = (move to L) + (exhaust L) + (move to R) + (exhaust R)
    // Each jump to a child and back to parent is 2 seconds + the internal traversal of the child
    subtree_time[u] = (subtree_time[tree[u].l] + 2 + subtree_time[tree[u].r] + 2) % MOD;
}

// Compute time to reach root for each node
void compute_ans(int u, long long time_to_root_from_parent) {
    if (u == 0) {
        // Root is destination, but we start from k=1...n
        if (tree[u].l != 0) compute_ans(tree[u].l, 0);
        return;
    }

    long long current_time;
    int p = tree[u].p;

    if (tree[u].l == 0) {
        // Leaf: moves to parent immediately (1 sec) then follows parent's remaining path
        current_time = (1 + time_to_root_from_parent) % MOD;
    } else {
        // Not a leaf: must exhaust own subtree (L then R) then move to parent
        // Time = (move to L) + (exhaust L) + (move to R) + (exhaust R) + (move to P)
        current_time = (subtree_time[u] + 1 + time_to_root_from_parent) % MOD;
    }

    ans[u] = current_time;

    if (tree[u].l != 0) {
        // Calculate time_to_root for children
        // For Left child: after returning to u, must traverse Right child then go to parent
        long long to_root_from_u_as_left = (2 + subtree_time[tree[u].r] + 1 + time_to_root_from_parent) % MOD;
        compute_ans(tree[u].l, to_root_from_u_as_left);

        // For Right child: after returning to u, move to parent immediately
        long long to_root_from_u_as_right = (1 + time_to_root_from_parent) % MOD;
        compute_ans(tree[u].r, to_root_from_u_as_right);
    }
}

void solve() {
    int n;
    cin >> n;
    tree.assign(n + 1, {0, 0, -1});
    subtree_time.assign(n + 1, 0);
    ans.assign(n + 1, 0);

    for (int i = 0; i < n; ++i) {
        int l, r;
        cin >> l >> r;
        tree[i].l = l;
        tree[i].r = r;
        if (l != 0) {
            tree[l].p = i;
            tree[r].p = i;
        }
    }

    compute_subtree_time(0);
    compute_ans(0, 0);

    for (int i = 1; i <= n; ++i) {
        cout << ans[i] << (i == n ? "" : " ");
    }
    cout << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}