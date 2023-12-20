from collections import defaultdict

def isSubsetSum(query_values):
    max_val = max(query_values)
    dp = defaultdict(bool)
    dp[0] = True

    for val in query_values:
        temp = list(dp.keys())
        for sub in temp:
            dp[sub + val] = True

    return dp

def process_queries(m, queries):
    query_values = []
    for i in range(m):
        t, v = queries[i]
        if t == 1:
            query_values.append(2 * v)
        else:
            dp = isSubsetSum(query_values)
            if v in dp:
                print("YES")
            else:
                print("NO")

m = int(input())
queries = []
for _ in range(m):
    t, v = map(int, input().split())
    queries.append((t, v))

process_queries(m, queries)
