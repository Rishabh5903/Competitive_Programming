import sys
input = sys.stdin.readline
for _ in range(int(input())):
    #n,m=map(int,input().split())
    n=int(input())
    s=str(input())
    l=list(input().split())
    l[0]=int(l[0])
    prev=0
    ans=0
    for j in range(n):
        if s[j] in l:
            ans=max(ans, j-prev)
            prev=j
    print(ans)
    #l[:0]=s
