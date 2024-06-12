import sys
input = sys.stdin.readline
for _ in range(int(input())):
    #n,m=map(int,input().split())
    n=int(input())
    #s=str(input())
    l=list(map(int,input().split()))
    l1=[]
    # var=0
    for j in range(1,n+1):
        if n<=0:
            break
        temp=0

        while l[j-1]%2==0:
            n-=1
            l[j-1]/=2
        while j%2==0:
            temp+=1
            j/=2
        l1.append(temp)
    if n<=0:
        print(0)
    else:
        l1.sort()
        ans=0
        flag=False
        for j in range(1,len(l1)+1):
            if n<=0:
                flag=True
                break
            n-=l1[-j]
            ans+=1
        if flag:
            print(ans)
        else:
            print(-1)
    #l[:0]=s
