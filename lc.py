def maxScoreTree(edges, values):
    n = len(values)
    
    adj_list = [[] for _ in range(n)]
    for u, v in edges:
        adj_list[u].append(v)
        adj_list[v].append(u)
    
    max_score = 0
    
    def dfs(node, parent):
        nonlocal max_score
        total_value = values[node]
        
        for neighbor in adj_list[node]:
            if neighbor != parent:
                subtree_value = dfs(neighbor, node)
                if subtree_value == 0:
                    continue
                total_value += subtree_value
                max_score += abs(subtree_value)
        
        if parent != -1:
            values[node] = 0
        
        return total_value
    
    root_value = dfs(0, -1)
    max_score += abs(root_value)
    
    return max_score

# Example 1
edges1 = [[0,1],[0,2],[0,3],[2,4],[4,5]]
values1 = [5,2,5,2,1,1]
print(maxScoreTree(edges1, values1))  # Output: 11

# Example 2
edges2 = [[0,1],[0,2],[1,3],[1,4],[2,5],[2,6]]
values2 = [20,10,9,7,4,3,5]
print(maxScoreTree(edges2, values2))  # Output: 40
