import sys
input = sys.stdin.readline
from math import sqrt,ceil,floor,lcm,gcd
for _ in range(int(input())):
    n,x=map(int,input().split())
    #n=int(input())
    #s=str(input())
    a=list(map(int,input().split()))
    b=list(map(int,input().split()))

    temp=[]
    # temp2=[]
    for i in range(n):
        temp.append((a[i],i))
    b.sort()
    temp.sort()
    temp.reverse()
    cnt=0
    for i in range(n):
        if(temp[i-1][0]>b[i-1]):
            cnt+=1
    if(cnt!=x):
        print("NO")
        continue
    else:
        print("YES")
        ans=[0]*n
        for i in range(x):
            ans[temp[i][1]]=b[i]
        ind=x
        for i in range(n):
            if(ans[i]==0):
                ans[i]=b[ind]
                ind+=1
        print(*ans)
        
    #l[:0]=s
