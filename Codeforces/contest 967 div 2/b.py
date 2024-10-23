from sys import stdin, stdout
input = stdin.readline
from bisect import bisect, bisect_right, bisect_left
from math import inf, ceil, log2, gcd, lcm, sqrt, log,floor
from heapq import heapify, heappop, heappush
from collections import Counter, deque
for _ in range(int(input())):
    #n,m=map(int,input().split())
    n=int(input())
    ans=[0]*n
    if(n%2==0):
        print(-1)
    else:
        for i in range(n//2+1):
            ans[2*i]=i+1
        for i in range(n//2):
            ans[-(2*(i+1))]=n//2+2+i
        print(*ans)

    #s=str(input())
    #s=s[:len(s)-1]
    #l=list(map(int,input().split()))
    #l[:0]=s
