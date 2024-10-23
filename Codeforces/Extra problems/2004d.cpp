#include <iostream>
#include <vector>
#include <queue>
#include <climits>
#include <algorithm>

using namespace std;

typedef pair<int, int> pii;

void solve() {
    int n, q;
    cin >> n >> q;

    vector<string> portals(n);
    vector<vector<int>> dist(n, vector<int>(4, INT_MAX));
    vector<int> dp(n, INT_MAX);
    
    auto getColorIndex = [](char c) {
        switch (c) {
            case 'B': return 0;
            case 'G': return 1;
            case 'R': return 2;
            case 'Y': return 3;
        }
        return -1;
    };

    for (int i = 0; i < n; i++) {
        cin >> portals[i];
    }

    // Precompute shortest distances for each color
    for (int color = 0; color < 4; color++) {
        priority_queue<pii, vector<pii>, greater<pii>> pq;

        for (int i = 0; i < n; i++) {
            if (getColorIndex(portals[i][0]) == color || getColorIndex(portals[i][1]) == color) {
                dist[i][color] = 0;
                pq.push({0, i});
            }
        }

        while (!pq.empty()) {
            int d = pq.top().first;
            int u = pq.top().second;
            pq.pop();

            if (d > dist[u][color]) continue;

            if (u > 0 && dist[u - 1][color] > d + 1) {
                dist[u - 1][color] = d + 1;
                pq.push({dist[u - 1][color], u - 1});
            }
            if (u < n - 1 && dist[u + 1][color] > d + 1) {
                dist[u + 1][color] = d + 1;
                pq.push({dist[u + 1][color], u + 1});
            }
        }
    }

    // Combine distances for each city into dp array
    for (int i = 0; i < n; i++) {
        dp[i] = *min_element(dist[i].begin(), dist[i].end());
    }

    // Answer each query
    while (q--) {
        int x, y;
        cin >> x >> y;
        x--; y--;

        int result = dp[x] + dp[y] + abs(x - y);

        cout << (result >= INT_MAX ? -1 : result) << endl;
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
