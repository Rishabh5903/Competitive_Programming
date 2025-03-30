#include <bits/stdc++.h>
using namespace std;
 
int N, K;
vector<vector<int>> adj;
vector<int> subSize;
vector<int> parentArr;
 
void dfs_subtree(int node, int par) {
    parentArr[node] = par;
    subSize[node] = 1;
    for (int nxt : adj[node]) {
        if(nxt == par) continue;
        dfs_subtree(nxt, node);
        subSize[node] += subSize[nxt];
    }
}
 
void dfs_collect(int node, int par, int limit, vector<int> &collect, vector<bool>& used) {
    if((int)collect.size() >= limit) return;
    used[node] = true;
    collect.push_back(node);
    if((int)collect.size() == limit) return;
    for (int nxt : adj[node]) {
        if(nxt == par) continue;
        if(!used[nxt]){
            dfs_collect(nxt, node, limit, collect, used);
            if((int)collect.size() == limit) return;
        }
    }
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int T; 
    cin >> T;
    while(T--){
        cin >> N >> K;
        adj.assign(N+1, vector<int>());
        for (int i=1; i<=N-1; i++){
            int u, v; 
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
 
        if(K==0 || K==N){
            cout << 1 << "\n";
            for (int i=1; i<=N; i++){
                cout << (K==N ? 1 : 0) << (i==N ? "\n" : " ");
            }
            continue;
        }

        int X = min(K, N-K);
        int minorityLabel = (K <= N/2) ? 1 : 0;
        int majorityLabel = 1 - minorityLabel;
 
        bool foundPendant = false;
        vector<bool> inSubtree(N+1, false);
 
        subSize.assign(N+1, 0);
        parentArr.assign(N+1, 0);
        dfs_subtree(1, 0);
 
        int chosenChild = -1; 
        for (int i = 2; i <= N; i++){
            if(subSize[i] == X){
                chosenChild = i;
                foundPendant = true;
                break;
            }
        }
 
        vector<int> ans(N+1, majorityLabel);
        int score;
 
        if(foundPendant){
            function<void(int,int)> markSubtree = [&](int node, int par){
                inSubtree[node] = true;
                for (int nxt : adj[node]){
                    if(nxt == par) continue;
                    if(parentArr[nxt] == node) {
                        markSubtree(nxt, node);
                    }
                }
            };
            markSubtree(chosenChild, parentArr[chosenChild]);
 
            for (int i = 1; i <= N; i++){
                if(inSubtree[i]) ans[i] = minorityLabel;
            }
            score = 2;
        } else {
            int start = -1;
            for (int i = 1; i <= N; i++){
                if(adj[i].size() == 1){
                    start = i;
                    break;
                }
            }
            if(start == -1) start = 1;
 
            vector<bool> used(N+1, false);
            vector<int> collect;
            dfs_collect(start, 0, X, collect, used);
 
            for (int node : collect) {
                ans[node] = minorityLabel;
            }
            score = 3;
        }

        int countOnes = 0;
        for (int i = 1; i <= N; i++){
            if(ans[i] == 1) countOnes++;
        }
        if(countOnes != K){
            for (int i = 1; i <= N; i++){
                ans[i] = 1 - ans[i];
            }
        }
 
        cout << score << "\n";
        for (int i = 1; i <= N; i++){
            cout << ans[i] << (i==N ? "\n" : " ");
        }
    }
    return 0;
}
