from sys import stdin, stdout
input = stdin.readline
from bisect import bisect, bisect_right, bisect_left
from math import inf, ceil, log2, gcd, lcm, sqrt, log,floor
from heapq import heapify, heappop, heappush
from collections import Counter, deque
for _ in range(int(input())):
    #n,m=map(int,input().split())
    n=int(input())

    l=list(map(int,input().split()))
    # l.sort()
    m=int(input())
    for i in range(m):
        s=str(input())
        s=s[:len(s)-1]
        temp=[]
        if(len(s)!=n):
            print("NO")
            continue
        for j in range(n):
            temp.append((s[j],l[j]))
        temp.sort()
        ans=1
        # print(temp,l)

        for j in range(1,n):
            if(temp[j][0]==temp[j-1][0]):
                if(temp[j][1]!=temp[j-1][1]):
                    ans=0
                    # print(j,"dbg",1)
                    break
            else:
                if(temp[j][1]==temp[j-1][1]):
                    # print(j,"dbg",2)
                    ans=0
                    break
        print("YES" if ans else "NO")


