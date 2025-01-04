from sys import stdin, stdout
input = stdin.readline
from bisect import bisect, bisect_right, bisect_left
from math import inf, ceil, log2, gcd, lcm, sqrt, log,floor
from heapq import heapify, heappop, heappush
from collections import Counter, deque
for _ in range(int(input())):
    #n,m=map(int,input().split())
    n=int(input())
    if(n==1 or n==3):
        print(-1)
    else:
        ans="66"
        if(n%2==0):
            ans="3"*(n-2)+ans
        else:
            ans="3"*(n-5)+"36366"
        print(ans)
    #s=str(input())
    #s=s[:len(s)-1]
    #l=list(map(int,input().split()))
    #l[:0]=s
