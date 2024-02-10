from sys import stdin, stdout
input = stdin.readline
from bisect import bisect, bisect_right, bisect_left
from math import inf, ceil, log2, gcd, lcm, sqrt, log
from heapq import heapify, heappop, heappush
from collections import Counter, deque
for _ in range(int(input())):
    #n,m=map(int,input().split())
    n=int(input())
    s=str(input())
    s=s[:len(s)-1]
    n1=0
    n2=-1
    for i in range(n):
        if(s[i]=='B'):
            n1=i
            break
    for i in range(n):
        if(s[n-i-1]=='B'):
            n2=n-i-1
            break
    if(n2==-1):
        print(1)
    else:
        print(n2-n1+1)
    #l=list(map(int,input().split()))
    #l[:0]=s
