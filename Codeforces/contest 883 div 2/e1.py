import sys
input = sys.stdin.readline
from math import log,pow,ceil,floor
ans=[0]*1000001
eps = 1e-9 
for k in range(2,1000001):
    for i in range(3,1000001):
        temp=(((pow(k,i)-1)/(k-1)))
        if abs(temp-ceil(temp))<=eps:
            temp=ceil(temp)
        elif abs(temp-floor(temp))<=eps:
            temp=floor(temp)
        if((temp))>1000000:
            break
        if(temp)==int((temp)):
            ans[int((temp))]=1

for _ in range(int(input())):
    #n,m=map(int,input().split())
    n=int(input())
    if ans[n]:
        print("YES")
    else:
        print("NO")