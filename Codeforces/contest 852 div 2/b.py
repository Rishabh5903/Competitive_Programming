import sys
input = sys.stdin.readline
for _ in range(int(input())):
    x,y=map(int,input().split())
    if x==y+1:
        print(2)
        print(x,y)
        continue
    ans=[]
    ans.append(x-1)
    # ans.append(x)
    for j in range(x,y-1,-1):
        
        ans.append(j)
        # print(ans,'1')
    for j in range(y+1,x-1):
        # print(ans)
        ans.append(j)
        # print(ans,'2')
    print(len(ans))
    print(*ans)
    #n1=int(input())
    #s=str(input())
    #l=list(map(int,input().split()))
    #l[:0]=s
