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
    ans=1
    temp=1
    for i in range(1,n):
        if(l[i]!=l[i-1]):
            ans=max(ans,temp)
            temp=1
        else:
            temp+=1
    ans=max(ans,temp)
    print(n-ans)
    #l[:0]=s
