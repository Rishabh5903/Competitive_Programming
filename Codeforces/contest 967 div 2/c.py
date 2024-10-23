def q(a, b):
    print(f"? {a} {b}")
    r = int(input())
    return r

def function(a, b, vis, edges):
    x = q(a, b)
    if x == a or x == b:
        edges.append((a, b))
        vis[x] = 1
        vis[b] = 1
        return
    if vis[a] and vis[x]:
        function(x, b, vis, edges)
    else:
        function(a, x, vis, edges)
        function(x, b, vis, edges)

def solve():
    t = int(input())
    while t > 0:
        t -= 1
        n = int(input())

        if n == 2:
            print("! 1 2")
            continue

        vis = [0] * (n + 1)
        edges = []

        for i in range(1, n):
            for j in range(i + 1, n + 1):
                if vis[j]:
                    continue
                function(i, j, vis, edges)

        print("!", end="")
        for edge in edges:
            print(f" {edge[0]} {edge[1]}", end="")
        print()

solve()
