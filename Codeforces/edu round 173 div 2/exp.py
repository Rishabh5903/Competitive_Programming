from sys import stdin, stdout
input = stdin.readline
from bisect import bisect, bisect_right, bisect_left
from math import inf, ceil, log2, gcd, lcm, sqrt, log,floor
from heapq import heapify, heappop, heappush
from collections import Counter, deque
for _ in range(int(input())):
    n,m,k=map(int,input().split())
    #n=int(input())
    #s=str(input())
    #s=s[:len(s)-1]
    a=list(map(int,input().split()))
    b=list(map(int,input().split()))
    if(k<n-1):
        print("0"*m)
        continue
    elif( k==n):
        print("1"*m)
        continue
    else:
        num=1
        b.sort()
        for i in b:
            if(i==num):
                num+=1
            else:
                break
        ans=["0"]*m
        for i in range(m):
            if(a[i]==num):
                ans[i]="1"
                break
        print("".join(ans))
    #l[:0]=s
