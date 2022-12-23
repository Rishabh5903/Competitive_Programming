n=int(input())
li=[]
for i in range(n):
    #n1,n2=map(int,input().split())
    n1=int(input())
    #s=str(input())
    l=list(map(int,input().split()))
    ans=0
    for j in range(n1-1):
        ans+=(l[j])**3
        ans+=3*l[j]*l[j+1]*(l[j]+l[j+1])
    li.append(ans)
    #l[:0]=s
for i in li:
    print(i)
