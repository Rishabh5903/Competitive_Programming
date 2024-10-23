from sys import stdin, stdout
input = stdin.readline
from bisect import bisect, bisect_right, bisect_left
from math import inf, ceil, log2, gcd, lcm, sqrt, log,floor
from heapq import heapify, heappop, heappush
from collections import Counter, deque
for _ in range(int(input())):
    n,k=map(int,input().split())
    #n=int(input())
    #s=str(input())
    #s=s[:len(s)-1]
    l=list(map(int,input().split()))
    l.sort()
    ans=0
    if(n%2):
        for i in range(1,n-1,2):
            ans+=l[i+1]-l[i]
    else:
        for i in range(0,n-1,2):
            ans+=l[i+1]-l[i]
    ans=max(0,ans-k)
    if(n%2):
        ans+=l[0]
    print(ans)
    #l[:0]=s
