from sys import stdin, stdout
input = stdin.readline
from bisect import bisect, bisect_right, bisect_left
from math import inf, ceil, log2, gcd, lcm, sqrt, log
from heapq import heapify, heappop, heappush
from collections import Counter, deque
for _ in range(int(input())):
    #n,m=map(int,input().split())
    n=int(input())
    #s=str(input())
    #s=s[:len(s)-1]
    l=list(map(int,input().split()))
    if(n==1 or n==2):
        print(-1)
        continue
    else:
        ind1=l.index(1)
        ind2=l.index(3)
        l[ind1]=3
        l[ind2]=1
        print(*l)
    #l[:0]=s
