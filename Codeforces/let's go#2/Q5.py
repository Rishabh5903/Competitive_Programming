n=int(input())
li=[]
for i in range(n):
    # n1,n2=map(int,input().split())
    n1=int(input())
    # s=str(input())
    l=list(map(int,input().split()))
    # l[:0]=s
    l1=[]
    for j in range(n1):
        l1.append(l[j]-j)
    l1.sort()
    l2=[]
    count=1
    for j in range(n1-1):
        if l1[j+1]==l1[j]:
            count+=1
            continue
        else:
            l2.append(count)
            count=1

    if count>1:
        l2.append(count)
    # print(l1,l2)
    ans=0
    for j in l2:
        ans+=(j)*(j-1)//2
    li.append(ans)

for i in li:
    print(i)
