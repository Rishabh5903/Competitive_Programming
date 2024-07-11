from sys import stdin, stdout
input = stdin.readline
from bisect import bisect, bisect_right, bisect_left
from math import inf, ceil, log2, gcd, lcm, sqrt, log,floor
from heapq import heapify, heappop, heappush
from collections import Counter, deque
for _ in range(int(input())):
    #n,m=map(int,input().split())
    n=int(input())
    s=str(input())
    var= s.count('1')
    if(var%2==0 and not(var==2 and s.count('11'))):
        print("YES")
    else:
        print("NO")
    #s=s[:len(s)-1]
    #l=list(map(int,input().split()))
    #l[:0]=s
