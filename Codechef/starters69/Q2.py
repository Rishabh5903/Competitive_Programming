n=int(input())
li=[]
for i in range(n):
    n1,n2=map(int,input().split())
    #n1=int(input())
    #s=str(input())
    l1=list(map(int,input().split()))
    l2=list(map(int,input().split()))
    l=[]
    for j in range(n1):
        l.append((l2[j],l1[j]))
    l.sort()
    ans=l[0][0]
    n2-=1
    mp={}
    mp[l[0][1]]=1
    for j in range(1,n1):
        if n2==0:
            break
        if l[j][1] in mp:
            if mp[l[j][1]]==1:
                continue
        else:
            ans+=l[j][0]
            mp[l[j][1]]=1
            n2-=1
    if n2>0:
        li.append(-1)
    else:
        li.append(ans)
    #l[:0]=s
for i in li:
    print(i)
