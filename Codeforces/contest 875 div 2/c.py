from collections import deque

def bfs(node, graph, visited):
    queue = deque()
    queue.append(node)
    visited[node] = True
    count = 0

    while queue:
        current_node = queue.popleft()
        for neighbor in graph[current_node]:
            if not visited[neighbor]:
                count += 1
                visited[neighbor] = True
                queue.append(neighbor)

    return count

def count_readings(t, test_cases):
    results = []

    for _ in range(t):
        n = test_cases[_]["n"]
        edges = test_cases[_]["edges"]

        # Build adjacency list representation of the tree
        graph = [[] for _ in range(n + 1)]
        for edge in edges:
            u, v = edge
            graph[u].append(v)
            graph[v].append(u)

        # Initialize visited array
        visited = [False] * (n + 1)

        # Perform BFS starting from vertex 1
        readings = bfs(1, graph, visited)

        results.append(readings)

    return results

# Read input
t = int(input())
test_cases = []
for _ in range(t):
    n = int(input())
    edges = []
    for _ in range(n - 1):
        u, v = map(int, input().split())
        edges.append((u, v))
    test_cases.append({"n": n, "edges": edges})

# Count readings for each test case
results = count_readings(t, test_cases)

# Print results
for res in results:
    print(res)
