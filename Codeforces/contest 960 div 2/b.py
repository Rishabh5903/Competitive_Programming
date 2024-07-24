from sys import stdin, stdout
input = stdin.readline
from bisect import bisect, bisect_right, bisect_left
from math import inf, ceil, log2, gcd, lcm, sqrt, log,floor
from heapq import heapify, heappop, heappush
from collections import Counter, deque
for _ in range(int(input())):
    n,x,y=map(int,input().split())
    ans=[1]*n
    if((y-1)%2):
        for i in range(y-1):
            if(i%2==0):
                ans[i]=-1
    else:
        for i in range(y-1):
            if(i%2==1):
                ans[i]=-1
        # else:
        #     ans[i]=-1
    # if((n-x)%2):
    for i in range(x,n):
        if((i-x)%2==0):
            ans[i]=-1
    # else:
    #     for i in range(x,n):
    #         if((i-x)%2==0):
    #             ans[i]=-1
    print(*ans)
    #n=int(input())
    #s=str(input())
    #s=s[:len(s)-1]
    #l=list(map(int,input().split()))
    #l[:0]=s
