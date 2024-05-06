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
    if(0<int(s[:2])<12):
        print(s+" AM")
    elif(int(s[:2])==12):
        print(s+" PM")
    elif(int(s[:2])==0):
        print("12"+s[2:]+" AM")
    else:
        ans=(str(int(s[:2])-12) if (int(s[:2])-12)>=10 else "0"+str(int(s[:2])-12))+s[2:]+" PM"

        print(ans)
    
    #l=list(map(int,input().split()))
    #l[:0]=s
