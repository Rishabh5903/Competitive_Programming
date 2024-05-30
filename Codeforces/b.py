from sys import stdin, stdout
input = stdin.readline
from bisect import bisect, bisect_right, bisect_left
from math import inf, ceil, log2, gcd, lcm, sqrt, log,floor
from heapq import heapify, heappop, heappush
from collections import Counter, deque
for _ in range(int(input())):
    #n,m=map(int,input().split())
    x=int(input())
    l=[]
    s=bin(x)[2:]
    # print(s)
    # print(len(s))
    # print(s[0])
    temp=0
    for i in range(len(s)-1,-1,-1):
        if(s[i]=='0'):
            if(temp>1):
                if(i==(0) or (i>0 and s[i-1]!='1')):
                    l.append(1)
                else:
                    l.append(-1)
                temp=1
            else:
                l.append(0)
                temp=0
            
        elif(s[i]=='1'):
            temp+=1
            if(temp==1):
                if(i==(0) or (i>0 and s[i-1]!='1')):
                    l.append(1)
                else:
                    l.append(-1)
            else:
                l.append(0)
    if(temp>1):
        l.append(1)
    # print(l)
    # l.reverse()
    print(len(l))
    print(*l)
    
    #s=str(input())
    #s=s[:len(s)-1]
    #l=list(map(int,input().split()))
    #l[:0]=s
