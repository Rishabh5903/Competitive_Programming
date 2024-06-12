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
    var=l[0]
    prod=l[0]
    for i in range(1,n):
        var=lcm(var,l[i])
        prod*=l[i]
    # if(lcm)
    ans=[0]*n
    
    for i in range(n):
        ans[i]=var//l[i]
    num=sum(ans)
    for i in range(n):
        if(l[i]*ans[i]<=num):
            ans=-1
            break
    if(ans==-1):
        print(-1)
    else:
        print(*ans)

    #l[:0]=s
