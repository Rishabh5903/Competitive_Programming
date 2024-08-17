from sys import stdin, stdout
input = stdin.readline
from bisect import bisect, bisect_right, bisect_left
from math import inf, ceil, log2, gcd, lcm, sqrt, log,floor
from heapq import heapify, heappop, heappush
from collections import Counter, deque
for _ in range(int(input())):
    #n,m=map(int,input().split())
    #n=int(input())
    s=str(input())
    s=s[:len(s)-1]
    if(s<'101'):
        print("NO")
        continue
    a,b=s[:2],s[2:]
    
    if(a=='10' and b[0]!='0' and int(b)>=2):
        print("YES")
    else:
        print("NO")
    #l=list(map(int,input().split()))
    #l[:0]=s
