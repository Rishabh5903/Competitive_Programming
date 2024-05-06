#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

const int MOD = 998244353;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    sort(a.begin(), a.end());
    vector<int> powers_of_two(n + 1, 1);
    for (int i = 1; i <= n; ++i) {
        powers_of_two[i] = (2 * powers_of_two[i - 1]) % MOD;
    }

    long long total = 0;

    for (int i = 0; i < n; ++i) {
        int current_max = a[i];

        // Calculate sum as max of subsets where current_max is the maximum element
        // All subsets of elements before i
        int subsets_count = (i > 0) ? (powers_of_two[i] - 1 + MOD) % MOD : 0;  // All possible non-empty subsets before index i

        long long sum_with_current_max = (1LL * subsets_count * current_max) % MOD;
        total = (total + sum_with_current_max) % MOD;

        // Additionally add all subsets containing the current element as max and others
        long long current_plus_other = (current_max + (1LL * subsets_count * current_max) % MOD) % MOD;
        total = (total + current_plus_other) % MOD;

        if (i < n - 1) {
            // Calculate sum as max of subsets where current_max is not the maximum element
            int next_bigger_idx = i + 1;
            while (next_bigger_idx < n && a[next_bigger_idx] == current_max) {
                next_bigger_idx++;
            }

            int count_of_higher = n - next_bigger_idx;
            if (count_of_higher > 0) {
                int count_subsets_higher = (powers_of_two[count_of_higher] - 1 + MOD) % MOD;
                total = (total + (1LL * count_subsets_higher * current_max) % MOD) % MOD;
            }
        }
    }

    // Result
    cout << total << endl;

    return 0;
}
