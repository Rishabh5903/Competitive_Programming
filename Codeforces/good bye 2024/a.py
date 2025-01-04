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
    if(n==2):
        print("YES")
        continue
    f=-1
    for i in range(1,n-1):
        if(l[i]+l[i+1]>l[-1]):
            # print("YES")
            f=i
            break
    if(f==-1):
        if(l[0]+l[1]>l[-2]):
            print("YES")
            continue
        else:
            print("NO")
            continue
    
    if(l[0]+l[1]>l[f-1]):
        print("YES")
    else:
        print("NO")
    #l[:0]=s
