import sys
input = sys.stdin.readline
for _ in range(int(input())):
    #n1,n2=map(int,input().split())
    n1=int(input())
    if n1==3:
        print('NO')
    elif n1%2==1 :
        print('YES')
        ans=[]
        for j in range(n1):
            if j%2==1:
                ans.append(n1-1)
            else:
                ans.append(3-n1)
        print(*ans)
    # elif n1%2==1 and ((n1-1)//2)%2==0:
    #     print('YES')
    #     ans=[]
    #     for j in range(n1):
    #         if j%2==0:
    #             ans.append(-1)
    #         else:
    #             ans.append(2)
    #     print(*ans)
    else:
        print('YES')
        ans=[]
        for j in range(n1):
            if j%2==0:
                ans.append(1)
            else:
                ans.append(-1)
        print(*ans)
    #s=str(input())
    #l=list(map(int,input().split()))
    #l[:0]=s
