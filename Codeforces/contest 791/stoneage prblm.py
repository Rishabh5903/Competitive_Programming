m,n=map(int,input().split())
l=list(map(int,input().split()))
li=[]
for i in range(n):
    l1=list(map(int,input().split()))
    if l1[0]==1:

        l[l1[1]-1]=l1[2]

        ans=0
        for j in range(0,len(l)):
            ans+=l[j]
        li.append(ans)
    elif l1[0]==2:
        for j in l:
            j=l1[1]
        ans=l[0]*len(l)
        li.append(ans)
print(*li,sep='\n')