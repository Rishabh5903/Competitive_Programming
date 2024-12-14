#include <iostream>
#include <vector>
#include <queue>
#include <set>

using namespace std;

const int MAX_VAL = 200000;
vector<bool> is_prime(MAX_VAL * 2 + 1, true);
vector<int> primes;

// Function to precompute primes up to 2n using sieve of Eratosthenes
void precompute_primes() {
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i * i <= MAX_VAL * 2; ++i) {
        if (is_prime[i]) {
            for (int j = i * i; j <= MAX_VAL * 2; j += i) {
                is_prime[j] = false;
            }
        }
    }
    for (int i = 2; i <= MAX_VAL * 2; ++i) {
        if (is_prime[i]) {
            primes.push_back(i);
        }
    }
}

bool solve_tree(int n, const vector<vector<int>>& adj, vector<int>& result) {
    set<int> available;
    for (int i = 1; i <= 2 * n; ++i) {
        available.insert(i);
    }

    result[1] = *available.begin(); // Assign the smallest number to the root node
    available.erase(result[1]); // Remove it from the set

    queue<int> q;
    q.push(1); // Start BFS from node 1

    while (!q.empty()) {
        int node = q.front();
        q.pop();

        for (int neighbor : adj[node]) {
            if (result[neighbor] == 0) { // If the neighbor hasn't been assigned a value
                // Find the next available valid number
                auto it = available.lower_bound(1);
                bool found = false;
                while (it != available.end()) {
                    int candidate = *it;

                    bool valid = true;
                    for (int neighbor : adj[node]) {
                        if (result[neighbor] != 0 && is_prime[abs(result[node] - candidate)]) {
                            valid = false;
                            break;
                        }
                    }

                    if (valid) {
                        result[neighbor] = candidate;
                        available.erase(it); // Remove the assigned number from the set
                        q.push(neighbor);
                        found = true;
                        break;
                    }
                    ++it; // Try the next larger number
                }

                if (!found) {
                    return false; // If no valid number found, return false
                }
            }
        }
    }

    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    precompute_primes(); // Precompute primes up to 2n

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<vector<int>> adj(n + 1);
        for (int i = 0; i < n - 1; ++i) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        vector<int> result(n + 1, 0);
        if (solve_tree(n, adj, result)) {
            for (int i = 1; i <= n; ++i) {
                cout << result[i] << " ";
            }
            cout << "\n";
        } else {
            cout << -1 << "\n";
        }
    }

    return 0;
}
