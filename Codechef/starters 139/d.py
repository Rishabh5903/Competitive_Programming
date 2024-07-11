from sys import stdin, stdout
input = stdin.readline
from bisect import bisect, bisect_right, bisect_left
from math import inf, ceil, log2, gcd, lcm, sqrt, log,floor
from heapq import heapify, heappop, heappush
from collections import Counter, deque
for _ in range(int(input())):
    #n,m=map(int,input().split())
    n=int(input())
    ans1=[i for i in range(1,n+1)]
    ans2=[0]*n
    temp=n//2
    var=1
    for i in range(n):
        ans2[(i+temp)%n]=var
        var+=1
    print(*ans1)
    print(*ans2)

    #s=str(input())
    #s=s[:len(s)-1]
    #l=list(map(int,input().split()))
    #l[:0]=s
