from sys import stdin, stdout
input = stdin.readline
from bisect import bisect, bisect_right, bisect_left
from math import inf, ceil, log2, gcd, lcm, sqrt, log
from heapq import heapify, heappop, heappush
from collections import Counter, deque
for _ in range(int(input())):
    n,m,x0,y0,l=map(int,input().split())
    n1=(y0-1)//l
    n2=(m-y0)//l
    n3=(x0-1)//l
    n4=(n-x0)//l
    print((n1+n2+1)*(n3+n4+1))
    # n3=
    #n=int(input())
    #s=str(input())
    #s=s[:len(s)-1]
    #l=list(map(int,input().split()))
    #l[:0]=s
