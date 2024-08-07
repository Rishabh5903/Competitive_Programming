from sys import stdin, stdout
input = stdin.readline
from bisect import bisect, bisect_right, bisect_left
from math import inf, ceil, log2, gcd, lcm, sqrt, log,floor
from heapq import heapify, heappop, heappush
from collections import Counter, deque
for _ in range(int(input())):
    n,s,m=map(int,input().split())
    f=0
    a=0
    b=0
    for i in range(n):
        l,r=map(int,input().split())
        if((l-b)>=s):
            f=1
            # break
        else:
            a=l
            b=r
    if((m-b)>=s):
        f=1
    print("YES" if f else "NO")
    #n=int(input())
    #s=str(input())
    #s=s[:len(s)-1]
    #l=list(map(int,input().split()))
    #l[:0]=s
