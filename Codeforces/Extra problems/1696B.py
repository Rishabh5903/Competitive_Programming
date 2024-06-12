n=int(input())
li=[]
for i in range(n):
    m=int(input())
    l=list(map(int,input().split()))
    ans=0
    for j in range(len(l)-1):
        if l[j]==0:
            continue
        else:
            if l[j+1]!=0:
                continue
            else:
                ans+=1
    if l[len(l)-1]!=0:
        ans+=1
    if ans==0 or ans==1:
        li.append(ans)
    else:
        li.append(2)

for i in li:
    print(i)
