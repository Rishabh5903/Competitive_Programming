import sys
input = sys.stdin.readline
for _ in range(int(input())):
    #n,m=map(int,input().split())
    n=int(input())
    #s=str(input())
    l=list(map(int,input().split()))
    ans = (1 << 30) - 1
    for j in range(n):
        if l[j]!=j:
            ans&=j
    print(ans)
    #l[:0]=s
