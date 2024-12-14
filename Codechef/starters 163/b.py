from sys import stdin, stdout
input = stdin.readline
from bisect import bisect, bisect_right, bisect_left
from math import inf, ceil, log2, gcd, lcm, sqrt, log,floor
from heapq import heapify, heappop, heappush
from collections import Counter, deque
for _ in range(int(input())):
    n,k=map(int,input().split())
    #n=int(input())
    #s=str(input())
    #s=s[:len(s)-1]
    l=list(map(int,input().split()))
    cnt=0
    temp=0
    for i in l:
        temp+=floor(i/k)
        if(i%k!=0):
            cnt+=1
    if(cnt>=abs(temp) and temp<=0):
        print("YES")
    else:
        print("NO")
    #l[:0]=s
