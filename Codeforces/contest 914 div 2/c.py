import sys
input = sys.stdin.readline
from math import sqrt,ceil,floor,lcm,gcd
for _ in range(int(input())):
    n,k=map(int,input().split())
    #n=int(input())
    #s=str(input())
    l=list(map(int,input().split()))
    if(k>=3):
        print(0)
        continue
    l.sort()
    # print(l)
    if(k==1):
        ans=l[0]
        for i in range(n-1):
            ans=min(ans,abs(l[i]-l[i+1]),l[i+1])
        print(ans)
        continue
    else:
        
        for i in range(n):
            for j in range(i+1,n):
                # if(i<j):
                    l.append((abs(l[i]-l[j]),1))
            l[i]=(l[i],0)
        l.sort()
        # print(l)
        ans=l[0][0]
        for i in range(len(l)-1):
            ans=min(ans,l[i+1][0])
            if(l[i][1]+l[i+1][1]==1):
                ans=min(ans,abs(l[i][0]-l[i+1][0]))
                    # ans=min(ans,abs(l[i]-))
        # ans=min(ans,abs(l[i]-abs(l[i]-l[i+1])),abs(l[i]-abs(l[i]-l[i-1])))
        print(ans)  
    #l[:0]=s
