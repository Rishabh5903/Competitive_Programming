import sys
input = sys.stdin.readline
for _ in range(int(input())):
    #n,m=map(int,input().split())
    n=int(input())
    if n==1:
        print(*[1 ,4 ,3 ,2])
    elif n==0:
        print(*[5,3,8,9])
    elif n==2:
        print(*[2,4,3,1])
    elif n==3:
        print(*[1,2,6,5])
    else:
            
        ans=[1,2]
        val=n^(3)
        ans.append(val)
        ans.append(3)
        print(*ans)
    #s=str(input())
    #l=list(map(int,input().split()))
    #l[:0]=s
