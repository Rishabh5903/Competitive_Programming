from sys import stdin, stdout
input = stdin.readline
from bisect import bisect, bisect_right, bisect_left
from math import inf, ceil, log2, gcd, lcm, sqrt, log
from heapq import heapify, heappop, heappush
from collections import Counter, deque
def check(x,k):
    num=0
    while(x):
        num+=x%10
        x//=10
    if(num%k==0):
        return 1
    else:
        return 0

for _ in range(int(input())):
    x,k=map(int,input().split())
    ans=0
    while True:
        if(check(x,k)):
            ans=x
            break
        x+=1
    print(x)

    #n=int(input())
    #s=str(input())
    #s=s[:len(s)-1]
    #l=list(map(int,input().split()))
    #l[:0]=s
