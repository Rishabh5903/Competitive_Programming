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
    if(n==1):
        print(0)
        continue
    ans=0
    for i in range(n-1,0,-1):
        if(l[i-1]<l[i]):
            ans=i
            break
    print(ans)
    #l[:0]=s
