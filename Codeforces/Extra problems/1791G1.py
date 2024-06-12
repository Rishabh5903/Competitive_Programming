import sys
input = sys.stdin.readline
for _ in range(int(input())):
    n,c=map(int,input().split())
    #n=int(input())
    #s=str(input())
    l=list(map(int,input().split()))
    for j in range(n):
        l[j]+=j+1
    l.sort()
    ans=0
    for j in l:

        if c<=0:
            break
        if j<=c:
            ans+=1
            c-=j
    print(ans)

    #l[:0]=s
