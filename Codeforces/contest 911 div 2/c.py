INF = 10 ** 10
import sys
input = sys.stdin.readline
dp=[-1]*300001
def dfs(i, adj, s, dp):
    if i == 0:
        dp[i]=INF
        return dp[i]
    if dp[i] != -1:
        return dp[i]

    if adj[i - 1][0] == adj[i - 1][1] and adj[i - 1][0] == 0:
        dp[i]=0
        return dp[i]
    
    if s[i - 1] == 'U':
        dp[i] = min(1 + dfs(adj[i - 1][0], adj, s, dp), 1 + dfs(adj[i - 1][1], adj, s, dp))
    else:
        a, b = INF, INF
        if s[i - 1] == 'L':
            a = dfs(adj[i - 1][0], adj, s, dp)
            b = 1 + dfs(adj[i - 1][1], adj, s, dp)
        if s[i - 1] == 'R':
            b = dfs(adj[i - 1][1], adj, s, dp)
            a = 1 + dfs(adj[i - 1][0], adj, s, dp)
        dp[i] = min(a, b)
    return dp[i]

def solve(dp):
    n = int(input())
    s = input().strip()
    adj = []
    for i in range(n):
        adj.append(list(map(int, input().split())))
    
    for  i in range(n+2):
        dp[i]=-1
    result = dfs(1, adj, s, dp)
    print(result)

n = int(input())
for t in range(1, n + 1):
    solve(dp)
