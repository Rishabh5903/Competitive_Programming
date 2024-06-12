from sys import stdin, stdout
input = stdin.readline
from bisect import bisect, bisect_right, bisect_left
from math import inf, ceil, log2, gcd, lcm, sqrt, log
from heapq import heapify, heappop, heappush
from collections import Counter, deque
for _ in range(int(input())):
    #n,m=map(int,input().split())
    n=int(input())
    s1=str(input())
    s1=s1[:len(s1)-1]
    s2=str(input())
    s2=s2[:len(s2)-1]
    c1=0
    c2=0
    for i in range(n):
        if(s1[i]=='0' and s2[i]=='1'):
            c1+=1
        elif(s1[i]=='1' and s2[i]=='0'):
            c2+=1
    print(max(c1,c2)) 
    #l=list(map(int,input().split()))
    #l[:0]=s
