import sys
input = sys.stdin.readline
for _ in range(int(input())):
    #n,m=map(int,input().split())
    n=int(input())
    #s=str(input())
    l=list(map(int,input().split()))
    cnt=[1]*(n+1)
    prev=[-1]*(n+1)
    # for j in range(n):
    #     if j%2==0:
    #         prev[l[j]]=0
    #     else:
    #         prev[l[j]]=1
    ans=[0]*(n+1)
    for j in range(n):
        temp=j%2
        # if j%2==0:
        if prev[l[j]]==-1:
            prev[l[j]]=temp
        elif prev[l[j]]!=temp:
            cnt[l[j]]+=1

        ans[l[j]]=max(ans[l[j]],cnt[l[j]])
        prev[l[j]]=temp
    print(*ans[1:])
    #l[:0]=s
