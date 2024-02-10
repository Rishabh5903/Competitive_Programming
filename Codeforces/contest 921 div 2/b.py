from sys import stdin, stdout
input = stdin.readline
from bisect import bisect, bisect_right, bisect_left
from math import inf, ceil, log2, gcd, lcm, sqrt, log
from heapq import heapify, heappop, heappush
from collections import Counter, deque
def max_balance_factor_approach(x, n):
    """Find the maximum balance for the problem set using the factor approach."""
    max_balance = 1

    # Iterate over all factors of x
    for f in range(1, int(x**0.5) + 1):
        if x % f == 0:
            # Check if x // f >= n, update max_balance if true
            if x // f >= n:
                max_balance = max(max_balance, f)
            
            # Check the same for the other factor x // f
            other_factor = x // f
            if x // other_factor >= n:
                max_balance = max(max_balance, other_factor)

    return max_balance
for _ in range(int(input())):
    n,m=map(int,input().split())
    print( max_balance_factor_approach(n,m))
    #n=int(input())
    #s=str(input())
    #s=s[:len(s)-1]
    #l=list(map(int,input().split()))
    #l[:0]=s
