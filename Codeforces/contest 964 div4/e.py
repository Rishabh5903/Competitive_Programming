from sys import stdin, stdout
input = stdin.readline
from bisect import bisect, bisect_right, bisect_left
from math import inf, ceil, log2, gcd, lcm, sqrt, log,floor,pow
from heapq import heapify, heappop, heappush
from collections import Counter, deque
for t in range(int(input())):
    a,b=map(int,input().split())
    if(t==241):
        print(a,b)
    #n=int(input())
    #s=str(input())
    #s=s[:len(s)-1]
    # l=[i for i in range(a,b+1)]
    # l.sort()
    ans=0
    var=a
    temp=0
    while(a):
        temp+=1
        a=a//3
    ans+=2*temp
    # ans+=2*(a//3+1)
    for i in range(var+1,b+1):
        if(pow(3,floor(log(i,3)))==i):
            temp+=1
        ans+=temp
        # print(ans)

    print(ans)        

    #l[:0]=s
