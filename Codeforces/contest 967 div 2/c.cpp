#include <iostream>
#include <vector>
#include <queue>
#include <set>
#include <utility>
using namespace std;

int query(int a, int b) {
    cout << "? " << a << " " << b << endl;
    cout.flush();
    int res;
    cin >> res;
    return res;
}

void solve(int n) {
    vector<pair<int, int>> edges;
    set<pair<int, int>> added_edges;  // To track added edges and avoid duplicates
    vector<bool> visited(n + 1, false);
    
    queue<int> bfs_queue;
    bfs_queue.push(1);
    visited[1] = true;
    
    while (!bfs_queue.empty()) {
        int current = bfs_queue.front();
        bfs_queue.pop();

        for (int i = 2; i <= n; ++i) {
            if (visited[i]) continue;

            int res = query(current, i);
            
            if (res == current) {
                // Direct connection
                if (!visited[i]) {
                    edges.push_back({current, i});
                    added_edges.insert({current, i});
                    added_edges.insert({i, current});
                    visited[i] = true;
                    bfs_queue.push(i);
                }
            } else {
                // Trace the path from current to i via res
                int tracer = res;
                while (tracer != current) {
                    int next_res = query(current, tracer);
                    if (next_res == current) {
                        if (added_edges.find({current, tracer}) == added_edges.end()) {
                            edges.push_back({current, tracer});
                            added_edges.insert({current, tracer});
                            added_edges.insert({tracer, current});
                        }
                        visited[tracer] = true;
                        bfs_queue.push(tracer);
                        break;
                    } else {
                        tracer = next_res;
                    }
                }
                if (!visited[i]) {
                    if (added_edges.find({tracer, i}) == added_edges.end()) {
                        edges.push_back({tracer, i});
                        added_edges.insert({tracer, i});
                        added_edges.insert({i, tracer});
                    }
                    visited[i] = true;
                    bfs_queue.push(i);
                }
            }
        }
    }

    // Output all unique edges
    cout << "! ";
    for (auto &edge : edges) {
        cout << edge.first << " " << edge.second << " ";
    }
    cout << endl;
    cout.flush();
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        solve(n);
    }
    return 0;
}
