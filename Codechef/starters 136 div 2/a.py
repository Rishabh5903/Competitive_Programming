from sys import stdin, stdout
input = stdin.readline
from bisect import bisect, bisect_right, bisect_left
from math import inf, ceil, log2, gcd, lcm, sqrt, log,floor
from heapq import heapify, heappop, heappush
from collections import Counter, deque
for _ in range(int(input())):
    #n,m=map(int,input().split())
    #n=int(input())
    s=str(input())
    x=1
    y=1
    if(s[0]=='1'):
        x+=10
    if(s[1]=='1'):
        x+=10
    if(s[2]=='1'):
        y+=10
    if(s[3]=='1'):
        y+=10
    print(x*y)
    
    #s=s[:len(s)-1]
    #l=list(map(int,input().split()))
    #l[:0]=s
