import sys
input = sys.stdin.readline
for _ in range(int(input())):
    n,m,d=map(int,input().split())
    #n=int(input())
    #s=str(input())
    a=list(map(int,input().split()))
    b=list(map(int,input().split()))
    pos=[0]*(n+1)
    for j in range(n):
        pos[a[j]]=j
    flag=False
    ans=float('inf')
    for j in range(m-1):
        p,q=pos[b[j]],pos[b[j+1]]
        if not(p<q<=p+d):
            flag=True
            break
        else:
            if d+1-q+p<=n-1-q+p:
                ans=min(ans,min(q-p,p+d+1-q))
            else:
                ans=min(ans,q-p)
    if flag:
        print(0)
    else:
        print(ans)

    #l[:0]=s
