#include <bits/stdc++.h>
using namespace std;

const int MAXN = 100005;
vector<int> tree[MAXN];
int up[MAXN][20], depth[MAXN], value[MAXN];
int n, k;

void dfs(int node, int parent) {
    up[node][0] = parent;
    depth[node] = depth[parent] + 1;
    for (int i = 1; i < 20; i++) {
        up[node][i] = up[up[node][i - 1]][i - 1];
    }
    for (int child : tree[node]) {
        if (child != parent) {
            dfs(child, node);
        }
    }
}


int lca(int u, int v) {
    if (depth[u] < depth[v]) swap(u, v);
    for (int i = 19; i >= 0; i--) {
        if (depth[u] - (1 << i) >= depth[v]) {
            u = up[u][i];
        }
    }
    if (u == v) return u;
    for (int i = 19; i >= 0; i--) {
        if (up[u][i] != up[v][i]) {
            u = up[u][i];
            v = up[v][i];
        }
    }
    return up[u][0];
}

void calculateValues(int node, int parent, vector<int>& edgeCount) {
    for (int child : tree[node]) {
        if (child != parent) {
            calculateValues(child, node, edgeCount);
            value[node] += value[child];
        }
    }
    if (parent) {
        edgeCount[node] = value[node];
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    cin >> n;
    vector<pair<int, int>> edges;  
    for (int i = 1; i < n; i++) {
        int u, v;
        cin >> u >> v;
        tree[u].push_back(v);
        tree[v].push_back(u);
        edges.push_back({u, v});
    }

    dfs(1, 0);

    cin >> k;
    for (int i = 0; i < k; i++) {
        int a, b;
        cin >> a >> b;
        int ancestor = lca(a, b);
        value[a]++, value[b]++;
        value[ancestor] -= 2;
    }

    vector<int> edgeCount(n + 1, 0);
    calculateValues(1, 0, edgeCount);

    for (auto& e : edges) {
        int u = e.first, v = e.second;
        if (depth[u] > depth[v]) swap(u, v);
        cout << edgeCount[v] << " ";
    }
    cout << "\n";
    return 0;
}
