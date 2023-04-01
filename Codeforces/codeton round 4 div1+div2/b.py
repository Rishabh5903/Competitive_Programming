import sys
input = sys.stdin.readline
for _ in range(int(input())):
    #n,m=map(int,input().split())
    n=int(input())
    ans=[]
    if n%2==0:
        print(-1)
        continue
    else:
        while n>1:
            if (n//2)%2==0:
                n=n//2+1
                ans.append(1)
            else:
                n=n//2
                ans.append(2)
        ans.reverse()
        print(len(ans))
        print(*ans)

    #s=str(input())
    #l=list(map(int,input().split()))
    #l[:0]=s
