from sys import stdin, stdout
input = stdin.readline
from bisect import bisect, bisect_right, bisect_left
from math import inf, ceil, log2, gcd, lcm, sqrt, log,floor
from heapq import heapify, heappop, heappush
from collections import Counter, deque
for _ in range(int(input())):
    n,a,b=map(int,input().split())
    ans=0
    k=min(n,max(b-a+1,0))
    if( k):
        ans+=k*b-(k*(k-1))//2
    ans+=(n-k)*a
    print(ans)

