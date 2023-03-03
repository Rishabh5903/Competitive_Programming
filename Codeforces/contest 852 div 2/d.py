import sys
input = sys.stdin.readline
import math
from math import comb
from math import gcd
from math import lcm
from math import factorial

    #n1,n2=map(int,input().split())
n=int(input())

    
#s=str(input())
r1=list(map(int,input().split()))
r2=list(map(int,input().split()))

    
# else:
# if n==200000:
#     print(r2)
l1=[]
l2=[]
for j in range(n):
    l1.append((r1[j],j+1))
    l2.append((r2[j],j+1))
l1.sort()
l2.sort()

ans=0
n1=min(l1[0][1],l2[0][1])-1
n2=max(l1[0][1],l2[0][1])-min(l1[0][1],l2[0][1])-1
n3=n-max(l1[0][1],l2[0][1])
ans+=(n1**2+n2**2+n3**2+n1+n2+n3)//2
a=[min(l1[0][1],l2[0][1]),max(l1[0][1],l2[0][1])]
# print(l1,l2)
for j in range(1,n):
    # print(ans)
    l=a[0]
    r=a[1]
    p=min(l1[j][1],l2[j][1])
    q=max(l1[j][1],l2[j][1])
    # print(p,q,r,l)
    if l<=q<=r or l<=p<=r:
        a[0]=min(p,l)
        a[1]=max(q,r)
        continue
    else:
        if q<l:
            ans+=(l-q)*(n-r+1)
        elif p<l<r<q:
            ans+=(l-p)*(q-r)
        else:
            ans+=(p-r)*(l)
        a[0]=min(p,l)
        a[1]=max(q,r)
ans+=1
print(ans)





    #l[:0]=s
