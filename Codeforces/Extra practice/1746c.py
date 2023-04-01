import sys
input = sys.stdin.readline
for _ in range(int(input())):
    #n,m=map(int,input().split())
    n=int(input())
    #s=str(input())
    l=list(map(int,input().split()))
    ans=[]
    pos=[0]*(n+1)
    for j in range(n):
        pos[l[j]]=j+1
    for j in range(n,0,-1):
        ans.append(pos[j])
    print(*ans)

    #l[:0]=s
