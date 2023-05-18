import sys
input = sys.stdin.readline
for _ in range(int(input())):
    n,k=map(int,input().split())
    if n%2==0:
        print('YES')
    else:
        if k%2==0:
            print('NO')
        elif n>=k:
            print('YES')
        else:
            print('NO')


    #n=int(input())
    #s=str(input())
    #l=list(map(int,input().split()))
    #l[:0]=s
