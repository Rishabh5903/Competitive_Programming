from sys import stdin, stdout
input = stdin.readline
from bisect import bisect, bisect_right, bisect_left
from math import inf, ceil, log2, gcd, lcm, sqrt, log,floor
from heapq import heapify, heappop, heappush
from collections import Counter, deque
def max_length_subsegment(pairs, L):
    n = len(pairs)
    # Calculate prefix sums for a_i values
    prefix_sums = [0] * (n + 1)
    for i in range(1, n + 1):
        prefix_sums[i] = prefix_sums[i - 1] + pairs[i - 1][0]

    left = 0
    max_length = 0

    for right in range(n):
        # Use prefix sum to calculate sum of a_i in the current window from left to right
        current_sum = prefix_sums[right + 1] - prefix_sums[left]
        while left <= right and current_sum + (pairs[right][1] - pairs[left][1]) > L:
            # Move left pointer to shrink the window
            left += 1
            current_sum = prefix_sums[right + 1] - prefix_sums[left]

        # Update max_length if the current segment is valid and longer
        max_length = max(max_length, right - left + 1)

    return max_length
for _ in range(int(input())):
    n,l=map(int,input().split())
    arr=[]
    for i in range(n):
        a,b=map(int,input().split())
        arr.append((a,b))
    print(max_length_subsegment(arr,l))
    #n=int(input())
    #s=str(input())
    #s=s[:len(s)-1]
    #l=list(map(int,input().split()))
    #l[:0]=s
