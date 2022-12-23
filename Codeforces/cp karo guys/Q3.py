n=int(input())
li=[]
for i in range(n):
    #n1,n2=map(int,input().split())
    n1=int(input())
    #s=str(input())
    l1=list(map(int,input().split()))
    l2=list(map(int,input().split()))
    ans=float('inf')
    l3=[-1 for j in range(2*n1)]
    l=[float('inf') for j in range(2*n1+1)]
    for j in range(n1):
        l3[l1[j]]=j
    prev=l3[1]
    for j in range(2*n1):
        if j%2==1:
            l[j+1]=min(prev,l3[j])
            prev=min(prev,l3[j])
    for j in range(n1):
        ans=min(ans,l[l2[j]]+j)

    li.append(ans)


    #l[:0]=s
for i in li:
    print(i)
