import sys
input = sys.stdin.readline
for _ in range(int(input())):
    n,t=map(int,input().split())
    #n=int(input())
    #s=str(input())
    a=list(map(int,input().split()))
    b=list(map(int,input().split()))
    l=[]
    for j in range(n):
        l.append((b[j],j))
    l.sort()
    f=0
    for j in range(n):
        if a[l[-(j+1)][1]]+l[-(j+1)][1]<=t:
            print(l[-(j+1)][1]+1)
            f=1
            break
    if not(f):
        print(-1)
    #l[:0]=s
