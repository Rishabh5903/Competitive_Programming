from sys import stdin, stdout
input = stdin.readline
from bisect import bisect, bisect_right, bisect_left
from math import inf, ceil, log2, gcd, lcm, sqrt, log
from heapq import heapify, heappop, heappush
from collections import Counter, deque
for _ in range(int(input())):
    
    # n=int(input())
    ans=0
    maxo=22
    for i in range(22):
        a,b=map(int,input().split())
        score=a+20*b
        if(score>=maxo):
            ans=i+1
        maxo=max(maxo,score)
    print(ans)
        
    #s=str(input())
    #s=s[:len(s)-1]
    #l=list(map(int,input().split()))
    #l[:0]=s
