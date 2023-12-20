import sys
input = sys.stdin.readline
from math import sqrt,ceil,floor,lcm,gcd
for _ in range(int(input())):
    #n,m=map(int,input().split())
    n=int(input())
    #s=str(input())
    l=list(map(int,input().split()))
    ans=[0]*n
    maxo=max(l)
    f={}
    for i in range(n):
        if(l[i] in f):
            ans[i]=maxo
        else:
            ans[i]=l[i]
            f[l[i]]=1
    print(*ans)
    
    #l[:0]=s
