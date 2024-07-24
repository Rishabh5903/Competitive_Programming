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
    a=str(input())
    b=str(input())
    if(a[0]=='0' and b[0]=='1'):
        print("NO")
        continue
    f=0
    ans=1
    for i in range(0,n):
        if(a[i]=='1'):
            f=1
        if(a[i]!=b[i]):
            if(not f):
                ans=0
                break
    if(ans):
        print("YES")
    else:
        print("NO")
    #l[:0]=s
