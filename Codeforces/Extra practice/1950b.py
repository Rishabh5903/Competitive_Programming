from sys import stdin, stdout
input = stdin.readline
from bisect import bisect, bisect_right, bisect_left
from math import inf, ceil, log2, gcd, lcm, sqrt, log,floor
from heapq import heapify, heappop, heappush
from collections import Counter, deque
for _ in range(int(input())):
    #n,m=map(int,input().split())
    n=int(input())
    for i in range(n):
        l=[]
        for j in range(n):
            if((i+j)%2==0):
                l.append('#')
                l.append('#')
            else:
                l.append('.')
                l.append('.')
        print("".join(l))
        print("".join(l))
        


    #s=str(input())
    #s=s[:len(s)-1]
    #l=list(map(int,input().split()))
    #l[:0]=s
