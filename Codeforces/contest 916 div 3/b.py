import sys
input = sys.stdin.readline
from math import sqrt,ceil,floor,lcm,gcd
for _ in range(int(input())):
    n,k=map(int,input().split())
    if(k==0):
        ans=[]
        for i in range(n,0,-1):
            ans.append(i)
        print(*ans)
        continue
    else:
        ans=[]
        for i in range(1,k+1):
            ans.append(i)
        for i in range(n,k,-1):
            ans.append(i)
        print(*ans)
    #n=int(input())
    #s=str(input())
    #l=list(map(int,input().split()))
    #l[:0]=s
