from sys import stdin, stdout
input = stdin.readline
from bisect import bisect, bisect_right, bisect_left
from math import inf, ceil, log2, gcd, lcm, sqrt, log,floor
from heapq import heapify, heappop, heappush
from collections import Counter, deque
for _ in range(int(input())):
    #n,m=map(int,input().split())
    n=int(input())
    #s=str(input())
    #s=s[:len(s)-1]
    l=list(map(int,input().split()))
    ans=0
    for i in range(n-1):
        if(l[i]!=0 and l[i+1]==0):
            ans+=1
    if(l[-1]!=0):
        ans+=1
    print(min(ans,2))
    #l[:0]=s
