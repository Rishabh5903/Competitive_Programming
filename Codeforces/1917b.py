from sys import stdin, stdout
input = stdin.readline
from bisect import bisect, bisect_right, bisect_left
from math import inf, ceil, log2, gcd, lcm, sqrt, log
from heapq import heapify, heappop, heappush
from collections import Counter, deque

    
for _ in range(int(input())):
    #n,m=map(int,input().split())
    n=int(input())
    s=str(input())
    s=s[:len(s)-1]
    d=set()
    ans=0
    #l=list(map(int,input().split()))
    for i in range(len(s)):
        d.add(s[i])
        ans+=len(d)
    print(ans)

    

