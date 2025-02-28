#include <bits/stdc++.h>
using namespace std;
 
const long long MOD = 998244353;
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;

        vector<int> par(n+1, 0);
        vector<vector<int>> children(n+1);
        for (int i = 2; i <= n; i++){
            int p;
            cin >> p;
            par[i] = p;
            children[p].push_back(i);
        }
        

        vector<int> depth(n+1, 0);
        vector<vector<int>> level(n+1);
        queue<int> q;
        q.push(1);
        depth[1] = 0;
        level[0].push_back(1);
        int maxDepth = 0;
        while(!q.empty()){
            int v = q.front();
            q.pop();
            for(auto u : children[v]){
                depth[u] = depth[v] + 1;
                maxDepth = max(maxDepth, depth[u]);
                level[depth[u]].push_back(u);
                q.push(u);
            }
        }
        
        vector<long long> dp(n+1, 0);
        dp[1] = 1; 
        for (int d = 1; d <= maxDepth; d++){
            long long sumPrev = 0;
            for (int v : level[d-1]){
                sumPrev = (sumPrev + dp[v]) % MOD;
            }
            for (int u : level[d]){
                if (par[u] == 1) {
                    dp[u] = sumPrev;
                } else {
                    dp[u] = (sumPrev - dp[par[u]] + MOD) % MOD;
                }
            }
        }
        
        long long ans = 0;
        for (int i = 1; i <= n; i++){
            ans = (ans + dp[i]) % MOD;
        }
        cout << ans % MOD << "\n";
    }
    return 0;
}
