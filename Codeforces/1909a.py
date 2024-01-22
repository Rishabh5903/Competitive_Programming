from sys import stdin, stdout
input = stdin.readline
from bisect import bisect, bisect_right, bisect_left
from math import inf, ceil, log2, gcd, lcm, sqrt, log
from heapq import heapify, heappop, heappush
from collections import Counter, deque
for _ in range(int(input())):
    
    n=int(input())
    f1=0
    f2=0
    f3=0
    f4=0
    for i in range(n):
        x,y=map(int,input().split())
        if(x<0):
            f1=1
        if(x>0):
            f2=1
        if(y<0):
            f3=1
        if(y>0):
            f4=1
    if(f1+f2+f3+f4==4):
        print("NO")
    else:
        print("YES")
    #s=str(input())
    #s=s[:len(s)-1]
    #l=list(map(int,input().split()))
    #l[:0]=s
