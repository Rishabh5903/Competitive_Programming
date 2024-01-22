from sys import stdin, stdout
input = stdin.readline
from bisect import bisect, bisect_right, bisect_left
from math import inf, ceil, log2, gcd, lcm, sqrt, log
from heapq import heapify, heappop, heappush
from collections import Counter, deque
for _ in range(int(input())):
    n,f,a,b=map(int,input().split())
    
    #n=int(input())
    #s=str(input())
    #s=s[:len(s)-1]
    l=list(map(int,input().split()))
    num=min(b,l[0]*a)
    for i in range(1,n):
        num+=min((l[i]-l[i-1])*a,b)
    if(num<f):
        print("YES")
    else:
        print("NO")
    #l[:0]=sYE
