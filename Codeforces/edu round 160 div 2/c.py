def is_possible_sum(query_values):
    max_possible_sum = 3000  # Maximum possible sum based on constraints
    dp = [False] * (max_possible_sum + 1)
    dp[0] = True  # Base case: You can always make a sum of 0

    for value in query_values:
        for j in range(max_possible_sum, -1, -1):
            if j >= value and dp[j - value]:
                dp[j] = True

    return dp

def main():
    m = int(input())
    queries = []
    for _ in range(m):
        t, v = map(int, input().split())
        if t == 1:
            queries.append(2 * v)
        else:
            possible_sums = is_possible_sum(queries)
            if v < len(possible_sums) and possible_sums[v]:
                print("YES")
            else:
                print("NO")

if __name__ == "__main__":
    main()
