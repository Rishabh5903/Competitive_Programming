#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

bool isValid(int mid, const vector<int>& ones, const vector<int>& zeros, int n, int k) {
    int currentGroup = 0;
    int groupStart = 0;
    long long scoreDifference = 0;

    for (int i = 0; i < n; ++i) {
        // Calculate the group index for this fish
        int groupIndex = (i - groupStart) / mid;
        if (groupIndex >= mid) {
            groupStart = i;
            groupIndex = 0;
        }
        scoreDifference += (ones[i] - zeros[i]) * groupIndex;
    }

    return scoreDifference >= k;
}

int minGroups(int n, int k, const string& s) {
    vector<int> ones(n), zeros(n);
    int totalOnes = 0, totalZeros = 0;

    // Precompute ones and zeros for each fish
    for (int i = 0; i < n; ++i) {
        totalOnes += (s[i] == '1');
        totalZeros += (s[i] == '0');
        ones[i] = totalOnes;
        zeros[i] = totalZeros;
    }

    // If the score difference with 1 group is already less than k, return -1
    if (totalOnes < totalZeros + k) return -1;

    int low = 1, high = n, answer = -1;

    // Binary search for the minimum number of groups
    while (low <= high) {
        int mid = (low + high) / 2;

        if (isValid(mid, ones, zeros, n, k)) {
            answer = mid; // Mid is valid, try for a smaller answer
            high = mid - 1;
        } else {
            low = mid + 1; // Mid is not valid, try for a larger answer
        }
    }

    return answer;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        string s;
        cin >> s;

        cout << minGroups(n, k, s) << "\n";
    }

    return 0;
}
