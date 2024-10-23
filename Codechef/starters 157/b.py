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
    x=s.count('1')
    if(x==0):
        print(n)
    elif(x%2):
        print(1)
    else:
        print(0)
    #l=list(map(int,input().split()))
    #l[:0]=s
