import sys
input = sys.stdin.readline
from math import sqrt
for _ in range(int(input())):
    n,k=map(int,input().split())
    if -4*n**2+8*n+16*k<0:
        print('NO')
        continue
    k1=(2*n+sqrt(-4*n**2+8*n+16*k))/4
    k2=(2*n-sqrt(-4*n**2+8*n+16*k))/4
    
    if int(k1)==k1 and k1<=n:
        print('YES')
        ans=[]
        for j in range(int(k1)):
            ans.append(1)
        for j in range(int(n-k1)):
            ans.append(-1)
        print(*ans)
    elif int(k2)==k2 and k2>0 and k2<=n:
        print('YES')
        for j in range(int(k2)):
            ans.append(1)
        for j in range(int(n-k2)):
            ans.append(-1)
        print(*ans)
    else:
        print('NO')
    #n=int(input())
    #s=str(input())
    #l=list(map(int,input().split()))
    #l[:0]=s
