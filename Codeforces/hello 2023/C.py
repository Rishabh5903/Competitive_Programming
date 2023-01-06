import sys
input = sys.stdin.readline
for _ in range(int(input())):
    n,m=map(int,input().split())
    #n1=int(input())
    #s=str(input())
    l=list(map(int,input().split()))
    ans=0
    if m>=2 and l[m-1]>0:
        ans+=1
        l[m-1]*=-1
    temp=sum(l[:m])
    temp2=0
    prev1=0
    # prev2=0
    
    for j in range(m-1):
        prev1+=l[j]
        if prev1<temp and l[j]<0:
            ans+=1
            # prev2+=2*l[j]
            prev1-=2*l[j]
            temp-=2*l[j]
    # if l[m-1]<0:
    #     ans+=1
    #     temp2-=2*l[m-1]
    for j in range(m,n):
        temp2+=l[j]
        if temp2<0 and l[j]<0:
            ans+=1
            temp2-=2*l[j]
    print(ans)
    #l[:0]=s
