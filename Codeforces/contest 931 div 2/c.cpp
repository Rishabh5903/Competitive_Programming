#include <bits/stdc++.h>
using namespace std;

int minCoins(int n) {
    vector<int> dp(n+1, INT_MAX);
    dp[0] = 0; // Base case
    int coins[] = {15,10,6,3,1}; // Coin values
    int m = sizeof(coins)/sizeof(coins[0]); // Number of coin types

    for(int i=1; i<=n; i++) {
        for(int j=0; j<m; j++) {
            if(coins[j] <= i && dp[i-coins[j]] != INT_MAX) {
                dp[i] = min(dp[i], dp[i-coins[j]] + 1);
            }
        }
    }
    return dp[n];
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        cout << minCoins(n) << endl;
    }
    return 0;
}
