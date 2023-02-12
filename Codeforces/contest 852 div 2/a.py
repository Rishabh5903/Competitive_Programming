import sys
input = sys.stdin.readline
for _ in range(int(input())):
    a,b=map(int,input().split())
    n,m=map(int,input().split())
    if m>n:
        print(n*min(a,b))
    else:
        if min(m*a,(m+1)*b)==m*a:
            print(m*(n//(m+1))*a+(n-(m+1)*(n//(m+1)))*min(a,b))
        else:
            print((n)*min(a,b))
    #n1=int(input())
    #s=str(input())
    #l=list(map(int,input().split()))
    #l[:0]=s
