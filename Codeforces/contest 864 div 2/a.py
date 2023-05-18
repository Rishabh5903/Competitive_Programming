import sys
input = sys.stdin.readline
for _ in range(int(input())):
    n,m=map(int,input().split())
    a,b,c,d=map(int,input().split())
    if (a==b==1 or c==d==1) or ((a==1 and b==m) or (c==1 and d==m)) or((a==n and b==1) or (c==n and d==1)) or((a==n and b==m) or (c==n and d==m)):
        print(2)
    elif a==1 or a==n or b==1 or b==m or c==1 or c==n or d==1 or d==m :
        print(3)
    else:
        print(4)
    #n=int(input())
    #s=str(input())
    #l=list(map(int,input().split()))
    #l[:0]=s
