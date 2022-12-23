n=int(input())
li=[]
for i in range(n):
    # n1,n2=map(int,input().split())
    n1=int(input())
    # s=str(input())
    l=list(map(int,input().split()))
    # l[:0]=s
    oc=0
    prod=1
    for j in l:
        if j==1:
            oc+=1
    for j in range(len(l)):
        if l[j]%2==0 :
            if oc>0:
                l[j]+=1
                oc-=1
            prod*=l[j]
        elif l[j]!=1:
            prod*=l[j]
    li.append(prod%998244353)

for i in li:
    print(i)
