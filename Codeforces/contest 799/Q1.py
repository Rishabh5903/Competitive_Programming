n=int(input())
li=[]
for i in range(n):
    l=list(map(int,input().split()))
    ans=0
    for j in range(1,len(l)):
        if l[j]>l[0]:
            ans+=1
    li.append(ans)

for i in li:
    print(i)
