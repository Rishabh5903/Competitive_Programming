import sys
input = sys.stdin.readline
from math import sqrt,ceil,floor,lcm,gcd
for _ in range(int(input())):
    #n,m=map(int,input().split())
    n=int(input())
    #s=str(input())
    l=list(map(int,input().split()))
    b=list(map(int,input().split()))
    lis=[]
    for i in range(n):
        lis.append((l[i],b[i]))
    lis.sort()
    ans=0
    for i in range(n-1):
        if(lis[i+1][0]!=lis[i][0]):
            if(lis[i][1]>0):
                ans+=lis[i][1]
    if(lis[-1][1]>0):
        ans+=lis[-1][1]
    print(ans)
    #l[:0]=s

