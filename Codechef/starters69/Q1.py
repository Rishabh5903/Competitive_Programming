n=int(input())
li=[]
for i in range(n):
    #n1,n2=map(int,input().split())
    n1=int(input())
    #s=str(input())
    l=list(map(int,input().split()))
    l.sort()
    ans=0
    flag=True
    for j in range(n1):
        if l[j]>j+1:
            flag=False
            break
        else:
            ans+=j+1-l[j]
    if not(flag):
        li.append(-1)
    else:
        li.append(ans)
    #l[:0]=s
for i in li:
    print(i)
