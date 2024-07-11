#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

void solve() {
    int T;
    cin >> T;
    
    while (T--) {
        int N;
        cin >> N;
        
        vector<int> A(N + 1);
        for (int i = 1; i <= N; ++i) {
            cin >> A[i];
        }
        
        vector<vector<int>> adj(N + 1);
        for (int i = 0; i < N - 1; ++i) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        
        // Find the vertex with the minimum A[i]
        int root = 1;
        for (int i = 2; i <= N; ++i) {
            if (A[i] < A[root]) {
                root = i;
            }
        }
        
        vector<int> level_order;
        queue<int> q;
        vector<bool> visited(N + 1, false);
        
        q.push(root);
        visited[root] = true;
        
        while (!q.empty()) {
            int node = q.front();
            q.pop();
            level_order.push_back(node);
            
            for (int neighbor : adj[node]) {
                if (!visited[neighbor]) {
                    visited[neighbor] = true;
                    q.push(neighbor);
                }
            }
        }
        
        // Reverse and take the last N-1 elements
        reverse(level_order.begin(), level_order.end());
        level_order.pop_back(); // remove the root element
        
        cout << level_order.size() << endl;
        for (int node : level_order) {
            cout << node << " ";
        }
        cout << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();
    
    return 0;
}
