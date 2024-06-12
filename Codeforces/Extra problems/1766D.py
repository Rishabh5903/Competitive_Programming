import sys
input = sys.stdin.readline
from math import gcd
MAXN = 10**7+1
spf = [0]*MAXN
spf[1] = 1
for i in range(2, MAXN):
    if spf[i]==0:
        for j in range(i,MAXN,i):

            spf[j]=i

for _ in range(int(input())):
    n1,n2=map(int,input().split())
    
    if gcd(n1,n2)!=1:
        print(0)
        continue
    elif gcd(n1+1,n2+1)!=1:
        print(1)
        continue
    elif (n2-n1)==1:
        print(-1)
        continue
    else:
        p=n2-n1
        ans=p*(n1//p+1)-n1
        while p!=1:
            
            ans=min(ans,spf[p]*(n1//spf[p]+1)-n1)
            p=p//spf[p]
        print(ans)
