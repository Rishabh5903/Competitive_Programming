import sys
from collections import defaultdict

def main():
    input = sys.stdin.read
    data = input().split()
    idx = 0
    t = int(data[idx])
    idx += 1
    results = []
    
    for _ in range(t):
        n = int(data[idx])
        idx += 1
        w = list(map(int, data[idx:idx+n]))
        idx += n
        adj = defaultdict(list)
        for _ in range(n-1):
            u = int(data[idx])
            v = int(data[idx+1])
            adj[u].append(v)
            adj[v].append(u)
            idx += 2
        
        max_in_subtree = [0] * (n + 1)
        
        def dfs(u, parent):
            max_in_subtree[u] = w[u-1]
            for v in adj[u]:
                if v != parent:
                    dfs(v, u)
                    max_in_subtree[u] = max(max_in_subtree[u], max_in_subtree[v])
        
        dfs(1, -1)
        
        winning_move = 0
        for u in range(1, n+1):
            if w[u-1] > max_in_subtree[u]:
                winning_move = u
                break
        
        results.append(str(winning_move))
    
    print("\n".join(results))

if __name__ == "__main__":
    main()