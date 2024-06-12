import sys
input = sys.stdin.readline
for _ in range(int(input())):
    n,l,r=map(int,input().split())
    f=1
    ans=[]
    for j in range(1,n+1):
        if l%j==0 :
            ans.append(l)
        elif r%j==0:
            ans.append(r)
        elif (l//j != r//j):
            ans.append((l//j+1)*j)
            # or  or :
            # continue
        else:
            f=0
            break
    if f:
        print('YES')
        print(*ans)
    else:
        print('NO')
    #n=int(input())
    #s=str(input())
    #l=list(map(int,input().split()))
    #l[:0]=s
