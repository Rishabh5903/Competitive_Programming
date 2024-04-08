from sys import stdin, stdout
input = stdin.readline
from bisect import bisect, bisect_right, bisect_left
from math import inf, ceil, log2, gcd, lcm, sqrt, log,floor
from heapq import heapify, heappop, heappush
from collections import Counter, deque
def max_length_subsequence(pairs, l):
    n = len(pairs)
    # Initialize a DP table where dp[i][j] represents the maximum length of the subsequence
    # using the first i elements with a sum of selected a_i values plus absolute difference of b_i values less than j
    dp = [[0 for _ in range(l + 1)] for _ in range(n + 1)]

    # Iterate over pairs
    for i in range(1, n + 1):
        a_i, b_i = pairs[i-1]
        for j in range(l + 1):
            # Option 1: Exclude the current pair
            dp[i][j] = dp[i-1][j]
            # Option 2: Include the current pair if possible
            for k in range(i):  # Check all possible subsequence starting points
                if k == 0:  # Single element subsequence case
                    if a_i <= j:
                        dp[i][j] = max(dp[i][j], 1)
                else:
                    a_k, b_k = pairs[k-1]
                    # Calculate the total cost including the absolute difference
                    total_cost = sum(pair[0] for pair in pairs[k-1:i]) + abs(b_i - b_k)
                    if total_cost <= j:
                        dp[i][j] = max(dp[i][j], i - k + 1)

    # Find the maximum length subsequence within the limit l
    return max(max(row) for row in dp)
for _ in range(int(input())):
    n, l = map(int, input().split())
    arr = []
    for _ in range(n):
        a, b = map(int, input().split())
        arr.append((b, a))  # Storing as (b_i, a_i) to sort based on b_i later

    arr.sort()  # Sort based on b_i to easily find the minimum and maximum b_i in any subsequence

    print(max_length_subsequence(arr,l))

    
    #l[0] = s # Assign the first element of l to s
    #l[:1] = [s] # Replace the first element of l with a list containing s
