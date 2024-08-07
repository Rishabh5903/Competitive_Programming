from sys import stdin, stdout
input = stdin.readline
from bisect import bisect, bisect_right, bisect_left
from math import inf, ceil, log2, gcd, lcm, sqrt, log,floor
from heapq import heapify, heappop, heappush
from collections import Counter, deque
for _ in range(int(input())):
    #n,m=map(int,input().split())
    n=int(input())
    s1=str(input())
    s1=s1[:len(s1)-1]
    s2=str(input())
    s2=s2[:len(s2)-1]
    ans=0
    for i in range(n-2):
        if(s1[i:(i+3)]=="x.x" and s2[i:(i+3)]=="..."):
            ans+=1
        elif(s2[i:(i+3)]=="x.x" and s1[i:(i+3)]=="..."):
            ans+=1
    print(ans)
    #l=list(map(int,input().split()))
    #l[:0]=s
