import sys
input = sys.stdin.readline
for _ in range(int(input())):
    #n1,n2=map(int,input().split())
    n=int(input())
    if n%2==0:
        print('NO')
    else:
        print('YES')
        for i in range(n//2+1):
            print(2*i+1,n+n//2+1-i)
        for i in range(n//2):
            print(2*(i+1),2*n-i)
    #s=str(input())
    #l=list(map(int,input().split()))
    #l[:0]=s
