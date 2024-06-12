from sys import stdin, stdout
input = stdin.readline
from bisect import bisect, bisect_right, bisect_left
from math import inf, ceil, log2, gcd, lcm, sqrt, log
from heapq import heapify, heappop, heappush
from collections import Counter, deque
import string
for _ in range(int(input())):
    #n,m=map(int,input().split())
    n=int(input())
    a=""
    b=""
    c=""
    if(n>=53):
        c="z"
        b="z"
        a=string.ascii_lowercase[n-2*26-1]
    elif(n>=28):
        c="z"
        a="a"
        b=string.ascii_lowercase[n-26-2]
    else:
        a="a"
        b="a"
        c=string.ascii_lowercase[n-26-3]
    print(a+b+c)
    #s=str(input())
    #s=s[:len(s)-1]
    #l=list(map(int,input().split()))
    #l[:0]=s
