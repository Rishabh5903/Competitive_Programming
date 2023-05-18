import sys
input = sys.stdin.readline
for _ in range(int(input())):
    #n,m=map(int,input().split())
    n=int(input())
    #s=str(input())
    a=list(map(int,input().split()))
    b=list(map(int,input().split()))
    l=1
    r=1
    maxo=1
    temp=1
    maxl=1
    maxr=1
    f=0

    for j in range(n-1):
        if b[j]!=a[j] and not(f):
            f=1
            if j>=1:
                if b[j-1]>b[j] :
                    l=j+1
                    r=j+1
                    maxl=l
                    maxr=r
                    temp=1
                    maxo=temp
        if b[j+1]>=b[j]:
            temp+=1
            r+=1
        else:


            if temp>maxo:
                maxl=l
                maxr=r
                maxo=temp
            l=j+2
            r=j+2

            # maxo=max(maxo,temp)
            temp=1
            if f:
                break
        # print(j,f)
    if temp>maxo :
        maxr=r
        maxl=l
    print(maxl,maxr)
            
        
    #l[:0]=s
