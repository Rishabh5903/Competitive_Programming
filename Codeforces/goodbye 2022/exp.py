import sys
input = sys.stdin.readline
for _ in range(int(input())):
    n,q=map(int,input().split())

    #n1=int(input())
    #s=str(input())
    e=0
    o=0
    l=list(map(int,input().split()))
    for j in l:
        if j%2==0:
            e+=1
        else:
            o+=1
    ans=sum(l)
    for _ in range(q):
        a,b=map(int,input().split())
        if a==0:
            ans+=e*b
            if b%2==1:
                o+=e
                e=0
            print(ans)
        else:
            ans+=o*b
            if b%2==1:
                e+=o
                o=0
            print(ans)
    # print(ans)
    #l[:0]=s
