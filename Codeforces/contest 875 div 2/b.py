import sys
input = sys.stdin.readline
for _ in range(int(input())):
    #n,m=map(int,input().split())
    n=int(input())
    #s=str(input())
    a=list(map(int,input().split()))
    b=list(map(int,input().split()))
    d1={}
    d2={}
    if n==1:
        if a[0]==b[0]:
            print(2)
        else:
            print(1)
        continue
    d1[a[0]]=1
    d2[b[0]]=1
    # f1=[1]*(2*n+1)
    # f2=[1]*(2*n+1)
    temp=1
    for j in range(1,n):
        if a[j]!=a[j-1]:
            temp=1
            if not(a[j] in d1):
                d1[a[j]]=1
        else:
            temp+=1
            d1[a[j]]=max(d1[a[j]],temp)
    temp=1
    for j in range(1,n):
        if b[j]!=b[j-1]:
            temp=1
            if not(b[j] in d2):
                d2[b[j]]=1
        else:
            temp+=1
            # print(d2)
            d2[b[j]]=max(d2[b[j]],temp)
    ans=0
    # print(d1,d2)
    temp=0
    for j in d1:
        temp=d1[j]
        if j in d2:
            temp+=d2[j]
        ans=max(ans,temp)
    for j in d2:
        if not(j in d1):
            temp=d2[j]
            ans=max(ans,temp)
    print(ans)


    #l[:0]=s
