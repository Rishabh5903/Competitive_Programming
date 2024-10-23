from sys import stdin, stdout
input = stdin.readline
from bisect import bisect, bisect_right, bisect_left
from math import inf, ceil, log2, gcd, lcm, sqrt, log,floor
from heapq import heapify, heappop, heappush
from collections import Counter, deque
for _ in range(int(input())):
    a,b=map(int,input().split())
    c,d=map(int,input().split())
    if(a==c and b==d):
        print(b-a)
    elif (a==c or b==d):
        print(min(b-a+1,d-c+1))
    elif(c>b or a>d):
        print(1)
    elif((c<a<b<d) or (a<c<d<b)):
        print(min(b-a,d-c)+2)
    else:
        print(min(abs(b-c),abs(d-a))+2)
    #n=int(input())
    #s=str(input())
    #s=s[:len(s)-1]
    #l=list(map(int,input().split()))
    #l[:0]=s
