from sys import stdin, stdout
input = stdin.readline
from bisect import bisect, bisect_right, bisect_left
from math import inf, ceil, log2, gcd, lcm, sqrt, log
from heapq import heapify, heappop, heappush
from collections import Counter, deque
for _ in range(int(input())):
    n,m=map(int,input().split())
    if(n>m):
        n,m=m,n
    if(n%2==0 or (m%2==0 and m!=2*n)):
        print("YES")
    else:
        print("NO")
    #n=int(input())
    #s=str(input())
    #s=s[:len(s)-1]
    #l=list(map(int,input().split()))
    #l[:0]=s
