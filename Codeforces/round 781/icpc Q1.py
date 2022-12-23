n=int(input())
a=[]
for i in range(n):
    n1=int(input())

    li=list(map(int,input().split()))
    li=sorted(li)
    n2=(int(input()))//6
    ans=0
    j=0

    while(n2>0 and j<n1):
        x=n2-li[j]
        if x>=0:
            j+=1
            n2=x
        else:
            break
    


    # while ans+li[j]<=n2 and j<len(li):
    #     ans+=li[j]
    #     j+=1
    a.append(j)
for i in range(n):
    print(a[i])