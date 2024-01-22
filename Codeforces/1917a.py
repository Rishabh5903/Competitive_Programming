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
    cnt=0
    f=0
    for i in l:
        if(i<0):
            cnt+=1
        elif(i==0):
            f=1
    if(f):
        print(0)
    elif(cnt%2):
        print(0)
    else:
        print(1)
        print(1,0)
    #l[:0]=s
