import sys
input = sys.stdin.readline
for _ in range(int(input())):
    #n,m=map(int,input().split())
    n=int(input())
    #s=str(input())
    a=list(map(int,input().split()))
    b=list(map(int,input().split()))
    p=[]
    d=[]
    for j in range(n-1):
        d.append(b[j]-a[j])
        p.append(a[j+1]-a[j])
    d.append(b[n-1]-a[n-1])
    p.append(a[0]-a[n-1])
    f=1
    for j in range(n-1):
        if d[j]<0:
            f=0
            break
        elif d[j]>0:
            if p[j]+d[j+1]+1<d[j]:
                f=0
                break
    if d[n-1]<0:
        f=0
    if p[n-1]+d[0]+1<d[n-1] and d[n-1]>0:
        f=0
    if f:
        print('YES')
    else:
        print('NO')

    #l[:0]=s
