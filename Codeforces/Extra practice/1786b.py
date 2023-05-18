import sys
input = sys.stdin.readline
for _ in range(int(input())):
    n,w,h=map(int,input().split())
    #n=int(input())
    #s=str(input())
    a=list(map(int,input().split()))
    b=list(map(int,input().split()))
    mino=float('inf')
    maxo=-float('inf')
    for j in range(n):
        mino=min(mino, a[j]-b[j])
        maxo=max(maxo, a[j]-b[j])
    if (maxo-w+h)<=(mino+w-h):
        print('YES')
    else:
        print('NO')
    #l[:0]=s
