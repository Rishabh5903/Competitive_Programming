from sys import stdin, stdout
input = stdin.readline
from bisect import bisect, bisect_right, bisect_left
from math import inf, ceil, log2, gcd, lcm, sqrt, log,floor
from heapq import heapify, heappop, heappush
from collections import Counter, deque
def calculate_forward_backward_mex(arr):
    n = len(arr)
    forward_mex = [0] * n
    backward_mex = [0] * n

    # Forward MEX calculation
    seen = set()
    mex = 0
    for i in range(n):
        seen.add(arr[i])
        while mex in seen:
            mex += 1
        forward_mex[i] = mex

    # Backward MEX calculation
    seen.clear()  # Reset the seen set for backward calculation
    mex = 0
    for i in range(n-1, -1, -1):
        seen.add(arr[i])
        while mex in seen:
            mex += 1
        backward_mex[i] = mex

    return forward_mex, backward_mex

for _ in range(int(input())):
    #n,m=map(int,input().split())
    n=int(input())
    #s=str(input())
    #s=s[:len(s)-1]
    l=list(map(int,input().split()))
    a,b=calculate_forward_backward_mex(l)
    # b=[]
    ans=-1

    for i in range(n-1):
        if(a[i]==b[i+1]):
            print(2)
            print(1,i+1)
            print(i+2,n)
            ans=0
            break
    if(ans==-1):
        print(ans)

    #l[:0]=s
