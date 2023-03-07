import sys
input = sys.stdin.readline
for _ in range(int(input())):
    #n,m=map(int,input().split())
    n=int(input())
    if n%2==0:
        print(n//2,1)
    else:
        print(-1)
    #s=str(input())
    #l=list(map(int,input().split()))
    #l[:0]=s
