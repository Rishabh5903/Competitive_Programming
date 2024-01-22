from sys import stdin, stdout
input = stdin.readline
from bisect import bisect, bisect_right, bisect_left
from math import inf, ceil, log2, gcd, lcm, sqrt, log
from heapq import heapify, heappop, heappush
from collections import Counter, deque
for _ in range(int(input())):
    #n,m=map(int,input().split())
    n=int(input())
    #s=str(input())
    #s=s[:len(s)-1]
    l=list(map(int,input().split()))
    l.sort()
    l.reverse()
    temp=0
    ans=0
    for i in range(n-1):
        temp+=1
        if(l[i]!=l[i+1]):
            ans+=(temp*(temp-1)*(temp-2))//6+(n-i-1)*(temp*(temp-1))//2
            temp=0

            
    temp+=1
    ans+=(temp*(temp-1)*(temp-2))//6
    print(ans)
    
    #l[:0]=s
