from sys import stdin, stdout
input = stdin.readline
from bisect import bisect, bisect_right, bisect_left
from math import inf, ceil, log2, gcd, lcm, sqrt, log,floor
from heapq import heapify, heappop, heappush
from collections import Counter, deque
for _ in range(int(input())):
    #n,m=map(int,input().split())
    n=int(input())
    s=str(input())
    s=s[:len(s)-1]
    val=0
    for i in range(n-1):
        if(s[i]!=s[i+1]):
            val+=1
    # if(val==1):
    #     print(1)
    #     continue
    val=ceil(val/2)
    print(max(val,0))
    #l=list(map(int,input().split()))
    #l[:0]=s
