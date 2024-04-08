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
    l.sort()
    ans=0
    for i in range(1,n-1):
        for j in range(i+1,n-1):
            ans=max(ans,(abs(l[j]-l[i])+abs(l[-1]-l[i])+abs(l[j]-l[0])+abs(l[-1]-l[0])))
    print(ans)
    #l[:0]=s
