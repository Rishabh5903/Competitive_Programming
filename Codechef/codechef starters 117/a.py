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
    # ind=-1

            
    l=[]
    l[:0]=s
    for i in range(n-1):
        if(s[i]>s[i+1]):
            l.pop(i)
            break
    if(len(l)==n):
        l.pop()
    print("".join(l))