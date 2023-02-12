import sys
input = sys.stdin.readline
for _ in range(int(input())):
    #n1,n2=map(int,input().split())
    n1=int(input())
    #s=str(input())
    l=list(map(int,input().split()))
    prod=1
    for j in l:
        prod*=j
    num=1
    ans=0
    flag=False
    for j in range(n1):
        # print(prod,num)
        num*=l[j]
        if int(num)==int(prod//num):
            flag=True
            ans=j+1
            break
        
    if flag:
        print(ans)
    else:
        print(-1)
        
    #l[:0]=s
