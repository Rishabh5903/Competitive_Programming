from sys import stdin, stdout
input = stdin.readline
from bisect import bisect, bisect_right, bisect_left
from math import inf, ceil, log2, gcd, lcm, sqrt, log,floor
from heapq import heapify, heappop, heappush
from collections import Counter, deque
for _ in range(int(input())):
    n,k=map(int,input().split())
    if(k==1 or (n%2 and k==2)):
        print(-1)
    else:
        ans=[]
        for i in range(int(ceil(n/k))):
            temp=[j for j in range(k*i+1,min(k*(i+1)+1,n+1))]
            var=temp.pop()
            temp=[var]+temp
            # print(temp)
            ans+=temp
            if(len(temp)==1):
                ans[-2],ans[-1]=ans[-1],ans[-2]
        # if(n%k==1):
        #     ans[-1],ans[-k]=ans[-k],ans[-1]
        print(*ans)
    # n=int(input())
    #s=str(input())
    #s=s[:len(s)-1]
    #l=list(map(int,input().split()))
    #l[:0]=s
