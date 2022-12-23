n=int(input())
li=[]
for i in range(n):
    l=list(map(int,input().split()))
    N=l[0]
    M=l[1]
    l1=list(map(int,input().split()))
    if N==M:
        sum=0
        for j in l1:
            sum+=j
        li.append(sum)
    else:
        sum=0
        k=N-M
        l1=sorted(l1)

        for j in range(1,M):
            sum+=l1[-j]
        if k%2==0:
            sum+=l1[k//2]
            
        else:
            sum+=(l1[k//2]+l1[k//2+1])/2
        li.append(sum)
for i in range(len(li)):
    print("Case #", i+1, ": ", li[i], sep="")
