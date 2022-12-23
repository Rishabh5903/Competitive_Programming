n=int(input())
li=[]
for i in range(n):
    
    n1,n2=map(int,input().split())
    ans=[0]*n2
    # n1=int(input())
    # s=str(input())
    l1=list(map(int,input().split()))
    l2=list(map(int,input().split()))
    l3=sorted(l2)
    # l1=sorted(l1)
    flag=False
    h=0
    index=0
    for j in range(n2):
        
        if flag:
            ans[l2.index(l3[j])]=sum(l1)
        if l3[j]>=max(l1):
            ans[l2.index(l3[j])]=sum(l1)
            l2[l2.index(l3[j])]=-1
            flag=True
            continue
        else:
            for k in range(index ,n1):
                if l3[j]>=l1[k]:
                    index+=1
                    h+=l1[k]
                    # print(l3[j])
                else:
                    ans[l2.index(l3[j])]=h
                    break
    li.append(ans)

for i in li:
    print(*i)
