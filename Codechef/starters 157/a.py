from sys import stdin, stdout
input = stdin.readline
from bisect import bisect, bisect_right, bisect_left
from math import inf, ceil, log2, gcd, lcm, sqrt, log,floor
from heapq import heapify, heappop, heappush
from collections import Counter, deque
for _ in range(int(input())):
    #n,m=map(int,input().split())
    n=int(input())
    #s=str(input())
    #s=s[:len(s)-1]
    l=list(map(int,input().split()))
    temp=l.pop()
    l.sort()
    l=l+[temp]
    # print(l)
    for i in range(n):
        if(l[i]>l[n] and l[i]<=(2*l[n])):
            l[i],l[-1]=l[-1],l[i]
    print(sum(l)-l[-1])
    #l[:0]=s

