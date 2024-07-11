from sys import stdin, stdout
input = stdin.readline
from bisect import bisect, bisect_right, bisect_left
from math import inf, ceil, log2, gcd, lcm, sqrt, log,floor
from heapq import heapify, heappop, heappush
from collections import Counter, deque
for _ in range(int(input())):
    a,b,c=map(int,input().split())
    l=[a,b,c]
    l.sort()
    for i in range(5):
        l[0]+=1
        l.sort()
    print(l[0]*l[1]*l[2])
    #n=int(input())
    #s=str(input())
    #s=s[:len(s)-1]
    #l=list(map(int,input().split()))
    #l[:0]=s
