import sys
input = sys.stdin.readline
for _ in range(int(input())):
    a,b,n=map(int,input().split())
    #n=int(input())
    #s=str(input())
    l=list(map(int,input().split()))
    ans=0
    for i in range(n):
        ans+=min(l[i],a-1)
    ans+=b
    # ans-=1
    print(ans)
    #l[:0]=s
