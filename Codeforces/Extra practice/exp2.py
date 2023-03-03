import sys
input = sys.stdin.readline
for _ in range(int(input())):
    n,k=map(int,input().split())
    #n=int(input())
    #s=str(input())
    ans=0
    a1=list(map(int,input().split()))
    c=list(map(int,input().split()))
    h=list(map(int,input().split()))
    a=[]
    for j in range(n):
        a.append((a1[j],j))
    a.sort()
    ans+=c[a[0][0]-1]
    for j in range(1,n):
        if a[j-1][0]!=a[j][0]:
            ans+=c[a[j][0]-1]
        else:
            ans+=h[a[j][0]-1]
    print(ans)

    #l[:0]=s
