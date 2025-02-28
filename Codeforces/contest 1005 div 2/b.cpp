#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> v(n);
    unordered_map<int, int> freq;
    
    // Read input and calculate frequency of each element
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        freq[v[i]]++;
    }

    // Two-pointer sliding window to find the largest subarray of distinct elements
    int max_length = 0, best_l = -1, best_r = -1;
    unordered_set<int> window;  // Set to track distinct elements in the window
    int l = 0;

    for (int r = 0; r < n; r++) {
        // Only consider elements with frequency 1
        if (freq[v[r]] > 1) {
            // Reset the window and move `l` to the next position
            window.clear();
            l = r + 1;
            continue;
        }

        // Expand the window
        while (window.count(v[r])) {
            window.erase(v[l]);
            l++;
        }

        window.insert(v[r]);

        // Check if this subarray is the longest so far
        int length = r - l + 1;
        if (length > max_length) {
            max_length = length;
            best_l = l;
            best_r = r;
        }
    }

    // Output the result
    if (best_l == -1) {
        cout << "0" << endl;  // No valid subarray found
    } else {
        cout << best_l + 1 << " " << best_r + 1 << endl;  // Convert to 1-indexed
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}
