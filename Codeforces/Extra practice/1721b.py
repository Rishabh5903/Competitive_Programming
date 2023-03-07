import sys
input = sys.stdin.readline
for _ in range(int(input())):
    n,m,a,b,d=map(int,input().split())
    if max(min(abs(b-1),abs(n-a)),min(abs(a-1),abs(m-b)))<=d:
        print(-1)
    else:
        print(abs(n-1)+abs(m-1))
    #n=int(input())
    #s=str(input())
    #l=list(map(int,input().split()))
    #l[:0]=s
