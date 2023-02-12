import sys
input = sys.stdin.readline
from math import gcd
for _ in range(int(input())):
    #n1,n2=map(int,input().split())
    n1=int(input())
    #s=str(input())
    l=list(map(int,input().split()))
    lis=[l[0]]
    for j in range(1,n1):
        lis.append(l[j]+lis[-1])
    ans=1
    # print(lis)
    for j in range(n1-1):
        ans=max(ans,gcd(lis[j],lis[-1]))
    print(ans)
    #l[:0]=s
