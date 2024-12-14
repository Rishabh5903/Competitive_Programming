#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <algorithm>
#include <queue>

using namespace std;

// Function to group connected components of transformations
void dfs(char node, unordered_map<char, unordered_set<char>>& graph, unordered_set<char>& visited, vector<char>& component) {
    visited.insert(node);
    component.push_back(node);
    for (char neighbor : graph[node]) {
        if (visited.find(neighbor) == visited.end()) {
            dfs(neighbor, graph, visited, component);
        }
    }
}

void solve() {
    int T;
    cin >> T; // Number of test cases

    while (T--) {
        int N;
        string S, P;
        cin >> N >> S >> P;

        // Map each character to its position in P
        unordered_map<char, int> char_to_pos;
        for (int i = 0; i < 26; ++i) {
            char_to_pos[P[i]] = i + 1;
        }

        // Build the graph of transformations
        unordered_map<char, unordered_set<char>> graph;
        for (char c : P) {
            int pos = char_to_pos[c];
            int target_pos = 27 - pos;
            if (target_pos >= 1 && target_pos <= 26) {
                char target_char = P[target_pos - 1];
                graph[c].insert(target_char);
                graph[target_char].insert(c);
            }
            graph[c].insert(c);
        }

        // Group characters into connected components
        unordered_set<char> visited;
        unordered_map<char, char> char_to_min_sorted;
        for (char c : P) {
            if (visited.find(c) == visited.end()) {
                vector<char> component;
                dfs(c, graph, visited, component);
                sort(component.begin(), component.end());
                for (char ch : component) {
                    char_to_min_sorted[ch] = component[0];
                }
            }
        }

        // Attempt to transform S using the mappings
        string transformed_S = S;
        for (char& ch : transformed_S) {
            ch = char_to_min_sorted[ch];
        }

        // Check if transformation matches sorted S
        string sorted_S = S;
        sort(sorted_S.begin(), sorted_S.end());

        if (transformed_S != sorted_S) {
            cout << -1 << "\n";
            continue;
        }

        // Count the minimum operations needed
        int operations = 0;
        for (int i = 0; i < N; ++i) {
            if (S[i] != sorted_S[i]) {
                ++operations;
            }
        }
        cout << operations << "\n";
    }
}
