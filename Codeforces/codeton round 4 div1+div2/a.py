import sys
input = sys.stdin.readline
for _ in range(int(input())):
    #n,m=map(int,input().split())
    n=int(input())
    #s=str(input())
    l=list(map(int,input().split()))
    f=0
    for j in range(n):
        if l[j]<=j+1:
            f=1
            break
    if f:
        print('YES')
    else:
        print('NO')
    #l[:0]=s
