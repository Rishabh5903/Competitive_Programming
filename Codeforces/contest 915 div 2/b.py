import sys
from collections import defaultdict
import sys
# sys.setrecursionlimit(1000009)
def dfs(i, adj, vis, ans):
    vis[i] = 1
    f = 0
    for v in adj[i]:
        if not vis[v]:
            dfs(v, adj, vis, ans)
            f = 1
    if not f:
        ans[0] += 1

def solve():
    n = int(input())
    adj = []
    for i in range(n):
        adj.append([])
    vis = [0] * n
    for i in range(n - 1):
        u, v = map(int, input().split())
        adj[u - 1].append(v - 1)
        adj[v - 1].append(u - 1)
    
    ans = [0]
    for i in range(n):
        if len(adj[i]) == 1:
            dfs(i, adj, vis, ans)
            break
    
    print((ans[0] // 2) + 1)

def main():
    n = int(input())
    for t in range(1, n + 1):
        solve()

if __name__ == "__main__":
    main()
