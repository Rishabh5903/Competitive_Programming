n=int(input())
li=[]
for i in range(n):
    # n1,n2=map(int,input().split())
    n1=int(input())
    # s=str(input())
    l=list(map(int,input().split()))
    # l[:0]=s
    n1=max(l)
    l1=l.copy()
    l1.remove(max(l1))
    n2=max(l1)
    ans=[]
    for j in l:
        if j!=n1:
            ans.append(j-n1)
        else:
            ans.append(n1-n2)
    li.append(ans)
for i in li:
    print(*i)
