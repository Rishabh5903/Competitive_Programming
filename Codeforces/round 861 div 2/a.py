import sys
input = sys.stdin.readline
for _ in range(int(input())):
    n,m=map(int,input().split())
    maxo=0
    ans=0
    for j in range(n,min(n+101,m+1)):
        # print(int(max(str(j)))-int(min(str(j))) ,maxo)
        if int(max(str(j)))-int(min(str(j))) >=maxo:
            ans=j
            maxo=int(max(str(j)))-int(min(str(j)))
    print(ans)
    #n=int(input())
    #s=str(input())
    #l=list(map(int,input().split()))
    #l[:0]=s
