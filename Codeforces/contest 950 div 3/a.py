from sys import stdin, stdout
input = stdin.readline
from bisect import bisect, bisect_right, bisect_left
from math import inf, ceil, log2, gcd, lcm, sqrt, log,floor
from heapq import heapify, heappop, heappush
from collections import Counter, deque
for _ in range(int(input())):
    n,f,k=map(int,input().split())
    #n=int(input())
    #s=str(input())
    #s=s[:len(s)-1]
    l=list(map(int,input().split()))
    val=l[f-1]
    temp=l.copy()
    temp.sort()
    temp.reverse()
    if(k==n):
        print("YES")
    else:
        if(temp[k]==temp[k-1]==val):
            print("MAYBE")
        elif(temp[k-1]>val):
            print("NO")
        else:
            print("YES")
    #l[:0]=s
