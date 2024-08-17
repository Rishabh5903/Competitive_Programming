from sys import stdin, stdout
input = stdin.readline
from bisect import bisect, bisect_right, bisect_left
from math import inf, ceil, log2, gcd, lcm, sqrt, log,floor
from heapq import heapify, heappop, heappush
from collections import Counter, deque
for _ in range(int(input())):
    x,y,n=map(int,input().split())
    # n=int(input())
    if(n==2):
        print((n*x)//2+1,(n*y)//2+1)
        print((n*x)//2-1,(n*y)//2-1)
        continue
    print(n*x,n*y)
    if(n%2):
        temp=1
        for i in range(n//2):
            print(abs(n*x)+temp,abs(n*y)+temp)
            print(-abs(n*x)-temp,-abs(n*y)-temp)
            temp+=1
    else:
        print(abs(n*x)+1,abs(n*y)+1)
        # n-=2
        if((n-2)>=2):
            print(abs(n*x)+2,abs(n*y)+2)
            print(-2*abs(n*x)-3,-2*abs(n*y)-3)
            temp=4
            for i in range((n-4)//2):
                print(2*abs(n*x)+temp,2*abs(n*y)+temp)
                print(-2*abs(n*x)-temp,-2*abs(n*y)-temp)
                temp+=1
        
    #s=str(input())
    #s=s[:len(s)-1]
    #l=list(map(int,input().split()))
    #l[:0]=s
