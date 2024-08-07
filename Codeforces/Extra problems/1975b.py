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
    l.sort()
    a=l[0]
    b=-1
    ans=1
    for i in range(1,n):
        if(l[i]%a==0):
            continue
        else:
            if(b==-1):
                b=l[i]
            else:
                if(l[i]%b != 0):
                    ans=0
                    break
    print("YES" if ans else "NO")
    #l[:0]=s
