#include <iostream>
#include <vector>
#include <queue>
#include <functional>
#include <unordered_map>
#include <utility>
#include <algorithm>

using namespace std;

typedef long long ll;
typedef pair<ll, pair<int, int>> plii;  // (cost, (incoming, outgoing))

const ll INF = 1e18;

void dfs(int vertex, unordered_map<int, vector<pair<ll, int>>>& adj, vector<bool>& visited) {
    if (visited[vertex]) return;
    visited[vertex] = true;
    for (auto& neighbor : adj[vertex]) {
        if (!visited[neighbor.second]) {
            dfs(neighbor.second, adj, visited);
        }
    }
}

int min_islands_to_visit(int N, ll C, vector<ll>& A) {
    // Build adjacency list representation of the complete graph
    unordered_map<int, vector<pair<ll, int>>> adj;
    for (int i = 1; i <= N; ++i) {
        for (int j = i + 1; j <= N; ++j) {
            ll cost = A[i - 1] * A[j - 1];
            adj[i].emplace_back(cost, j);
            adj[j].emplace_back(cost, i);
        }
    }
    
    // Priority queue to handle the cheapest edge first
    priority_queue<plii, vector<plii>, greater<plii>> pq;
    
    // Initialize the queue with all edges connected to island 1
    for (auto& edge : adj[1]) {
        pq.push({edge.first, {1, edge.second}});
    }
    
    int reachable_count = 1;  // Start with island 1
    
    while (!pq.empty()) {
        ll cost = pq.top().first;
        int incoming = pq.top().second.first;
        int outgoing = pq.top().second.second;
        pq.pop();
        
        if (cost <= C) {
            // Destroy the bridge
            C -= cost;
            
            // Remove the destroyed edge from adjacency list of both vertices
            auto& neighbors_incoming = adj[incoming];
            auto& neighbors_outgoing = adj[outgoing];
            
            // Remove outgoing from incoming's adjacency list
            auto it_incoming = find_if(neighbors_incoming.begin(), neighbors_incoming.end(),
                                       [&](const pair<ll, int>& edge) { return edge.second == outgoing; });
            if (it_incoming != neighbors_incoming.end()) {
                neighbors_incoming.erase(it_incoming);
            }
            
            // Remove incoming from outgoing's adjacency list
            auto it_outgoing = find_if(neighbors_outgoing.begin(), neighbors_outgoing.end(),
                                       [&](const pair<ll, int>& edge) { return edge.second == incoming; });
            if (it_outgoing != neighbors_outgoing.end()) {
                neighbors_outgoing.erase(it_outgoing);
            }
            
        } else {
            // Add remaining edges of 'outgoing' back into the priority queue
            bool added_any_edge = false;
            for (auto& edge : adj[outgoing]) {
                if (edge.second != incoming) {  // avoid adding the removed edge
                    pq.push({edge.first, {outgoing, edge.second}});
                    added_any_edge = true;
                }
            }
            
            // If no edge was added to the priority queue, break the while loop
            if (!added_any_edge) {
                break;
            }
        }
    }
    cout<<"dbg"<<endl;
    vector<bool> visited(N + 1, false);
    dfs(1, adj, visited);
    
    int result = 0;
    for (int i = 1; i <= N; ++i) {
        if (visited[i]) ++result;
    }
    
    return result;
}

int main() {
    int T;
    cin >> T;
    
    while (T--) {
        int N;
        ll C;
        cin >> N >> C;
        
        vector<ll> A(N);
        for (int i = 0; i < N; ++i) {
            cin >> A[i];
        }
        
        int result = min_islands_to_visit(N, C, A);
        cout << result << endl;
    }
    
    return 0;
}
