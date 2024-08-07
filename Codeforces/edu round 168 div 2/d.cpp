#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

void dfs(int node, const vector<vector<int>>& tree, vector<long long>& values, vector<long long>& dp, vector<long long>& min_subtree) {
    bool has_child = false;
    long long min_child_value = LLONG_MAX;

    for (int child : tree[node]) {
        has_child = true;
        dfs(child, tree, values, dp, min_subtree);
        min_child_value = min(min_child_value, min_subtree[child]);
    }

    if (has_child) {
        if (values[node] < min_child_value) {
            dp[node] = (values[node] + min_child_value) / 2;
        } else {
            dp[node] = values[node];
        }
        min_subtree[node] = min(dp[node], min_child_value);
    } else {
        dp[node] = values[node];
        min_subtree[node] = values[node];
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<long long> values(n + 1);
        for (int i = 1; i <= n; ++i) {
            cin >> values[i];
        }

        vector<vector<int>> tree(n + 1);
        for (int i = 2; i <= n; ++i) {
            int parent;
            cin >> parent;
            tree[parent].push_back(i);
        }

        vector<long long> dp(n + 1);
        vector<long long> min_subtree(n + 1, LLONG_MAX);

        dfs(1, tree, values, dp, min_subtree);

        // Calculate final root value
        long long min_child_value = LLONG_MAX;
        for (int child : tree[1]) {
            min_child_value = min(min_child_value, min_subtree[child]);
        }
        dp[1] = values[1] + min_child_value;



        cout << dp[1] << '\n';
    }

    return 0;
}
