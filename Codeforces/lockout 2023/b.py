import sys
input = sys.stdin.readline

n,a,b=map(int,input().split())
if a==b:
    for j in range(2,n):
        print('YES')
else:
    for j in range(2,n):
        if (n-2)%j==0:
            print('YES')
        else:
            print('NO')
    #n=int(input())
    #s=str(input())
    #l=list(map(int,input().split()))
    #l[:0]=s
