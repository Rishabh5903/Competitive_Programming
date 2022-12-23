import sys
input = sys.stdin.readline
for _ in range(int(input())):
    n,x=map(int,input().split())
    ans=0
    l1=list(map(int,input().split()))
    l2=list(map(int,input().split()))
    for j in range(n):
        if l1[j]>=x:
            ans+=l2[j]
    print(ans)
    #n1=int(input())
    #s=str(input())
    # l=list(map(int,input().split()))
    #l[:0]=s
