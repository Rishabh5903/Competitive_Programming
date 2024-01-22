from sys import stdin, stdout
input = stdin.readline
from bisect import bisect, bisect_right, bisect_left
from math import inf, ceil, log2, gcd, lcm, sqrt, log
from heapq import heapify, heappop, heappush
from collections import Counter, deque
for _ in range(int(input())):
    #n,m=map(int,input().split())
    n=int(input())
    mino=0
    maxo=1e10
    d=[]
    for i in range(n):
        a,x=map(int,input().split())
        if(a==1):
            mino=max(mino,x)
        elif (a==2):
            maxo=min(maxo,x)
        else:
            d.append(x)
    ans=0
    cnt=0
    for i in d:
        if(mino<=i<=maxo):
            cnt+=1
    print(max(maxo-mino+1-cnt,0))

    #s=str(input())
    #s=s[:len(s)-1]
    #l=list(map(int,input().split()))
    #l[:0]=s
