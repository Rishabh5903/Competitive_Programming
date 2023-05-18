import sys
input = sys.stdin.readline
for p in range(int(input())):
    #n,m=map(int,input().split())
    t=int(input())
    #s=str(input())
    lis=list(map(int,input().split()))
    x=0
    for j in lis:
        x^=j
    if t%2==0:
        if x==0:
            print(1)
        else:
            print(-1)
    else:
        print(x)
    #l[:0]=s
