from sys import stdin, stdout
input = stdin.readline
from bisect import bisect, bisect_right, bisect_left
from math import inf, ceil, log2, gcd, lcm, sqrt, log
from heapq import heapify, heappop, heappush
from collections import Counter, deque
l=[[1],[169,196,961]]
for i in range(5,100):
    if(i%2):
        temp=l[-1].copy()
        for j in range(len(temp)):
            temp[j]*=100
        temp.append(int("1"+"0"*((i-3)//2)+"6"+"0"*((i-3)//2)+"9"))
        temp.append(int("9"+"0"*((i-3)//2)+"6"+"0"*((i-3)//2)+"1"))
        l.append(temp)
# print(l)
for _ in range(int(input())):
    #n,m=map(int,input().split())
    n=int(input())
    for i in l[n//2]:
        print(i)
    #s=str(input())
    #s=s[:len(s)-1]
    #l=list(map(int,input().split()))
    #l[:0]=s
