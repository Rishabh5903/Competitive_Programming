from sys import stdin, stdout
input = stdin.readline
from bisect import bisect, bisect_right, bisect_left
from math import inf, ceil, log2, gcd, lcm, sqrt, log
from heapq import heapify, heappop, heappush
from collections import Counter, deque
for _ in range(int(input())):
    n,m=map(int,input().split())
    #n=int(input())
    s=str(input())
    s=s[:len(s)-1]
    num=s.count('B')
    if(num==m):
        print(0)
    elif (num<m):
        var=0
        for i in range(1,n+1):
            if(var==n-m):
                print(1)
                print(n-i+1,'B')
                break
            if(s[-i]=='A'):
                var+=1
        # print(1)
        # print(m-var,'B')
    else :
        var=0
        for i in range(1,n+1):
            if(var==m):
                print(1)
                print(n-i+1,'A')
                break
            if(s[-i]=='B'):
                var+=1
        
            
    #l=list(map(int,input().split()))
    #l[:0]=s
