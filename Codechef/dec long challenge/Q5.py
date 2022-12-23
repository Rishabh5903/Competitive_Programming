n=int(input())
# li=[]
for i in range(n):
    n1,k=map(int,input().split())
    #n1=int(input())
    #s=str(input())
    #l=list(map(int,input().split()))
    #l[:0]=s
    if k<n1*(n1+1)/2:
        print(-1)
    else:
        if n1==1:
            print(k)
        else:
            l1=[]
            l1.append(k-n1*(n1+1)//2+1)
            for j in range(1,n1):
                l1.append(1)
            print(*l1)
