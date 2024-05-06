import sys
input = sys.stdin.readline
from math import sqrt,ceil,floor,lcm,gcd
for _ in range(int(input())):
    #n,m=map(int,input().split())
    n=int(input())
    #s=str(input())
    l=list(map(int,input().split()))
    fr=[0]*(101)
    cnt=0
    lis=[]
    for i in l:
        fr[i]+=1
        if(fr[i]==2):
            cnt+=1
            if(cnt<=2):
                lis.append(i)
    if(cnt<2):
        print(-1)
        continue
    else:
        ans=[0]*n
        for i in range(n):
            if(l[i] not in lis):
                ans[i]=1
                
            else:
                if(fr[l[i]]==1 and l[i]==lis[0]):
                    ans[i]=2
                elif (fr[l[i]]==1 and l[i]==lis[1]):
                    ans[i]=3
                else:
                    ans[i]=1
                fr[l[i]]-=1
        print(*ans)
    
    #l[:0]=s
