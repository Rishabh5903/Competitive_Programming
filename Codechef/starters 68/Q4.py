n=int(input())
li=[]
for i in range(n):
    n,x,c=map(int,input().split())
    # n1=int(input())
    # s=str(input())
    l=list(map(int,input().split()))
    # l[:0]=s
    ans=0
    for j in l:
        if (x-j)>c:
            ans+=x-c
        else:
            ans+=j
    li.append(ans)
for i in li:
    print(i)
