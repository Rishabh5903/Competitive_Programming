n=int(input())
li=[]
for i in range(n):
    n1=int(input())
    l=list(map(int,input().split()))
    ans=0
    for j in range(len(l)):
        if l[j]>=j+1:
            continue
        else:
            for k in range(j+1,len(l)):
                if l[k]>=k+1:
                    continue
                else:
                    if l[k]>j+1:
                        ans+=1
                    else:
                        continue
    li.append(ans)
for i in li:
    print(i)
