import sys
input = sys.stdin.readline
for _ in range(1):
    n,m=map(int,input().split())
    #n=int(input())
    a=str(input())
    b=str(input())
    a=a[:n]
    b=b[:m]
    # print(len(a))
    if(b[:n]==a and b[(m-n):]==a):
        print(0)
    elif(b[:n]==a and b[(m-n):]!=a):
        print(1)
    elif(b[:n]!=a and b[(m-n):]==a):
        print(2)
    else:
        print(3)
    #l=list(map(int,input().split()))
    #l[:0]=s
