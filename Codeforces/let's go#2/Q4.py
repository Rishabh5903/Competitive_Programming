n=int(input())
li=[]
for i in range(n):
    # n1,n2=map(int,input().split())
    n1=int(input())
    s=str(input())
    # l=list(map(int,input().split()))
    # l[:0]=s
    if n1==1:
        li.append(0)
        continue

    l=[]
    for j in range(n1):
        if s[j]=='*':
            l.append(j)
    pivot=len(l)//2
    ans=0
    for j in range(pivot):
        ans+=(l[j+1]-l[j]-1)*(j+1)
    for j in range(1,len(l)-pivot):
        ans+=(l[-(j)]-l[-(j+1)]-1)*j
    li.append(ans)
for i in li:
    print(i)
