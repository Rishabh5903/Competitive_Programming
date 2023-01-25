import sys
input = sys.stdin.readline
for _ in range(int(input())):
    #n1,n2=map(int,input().split())
    n1=int(input())
    #s=str(input())
    l=list(map(int,input().split()))
    if 0 in l:
        print(-1)
        continue
    else:
        ans=abs(l[0])
        for j in l:
            ans=min(ans, abs(j))
        print(ans-1)
    #l[:0]=s
