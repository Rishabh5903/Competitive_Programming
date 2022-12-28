import sys
input = sys.stdin.readline
for _ in range(int(input())):
    #n1,n2=map(int,input().split())
    n=int(input())
    print((2022*((4*(n**3)+2*n)//6+(n**2-n)//2))%(10**9+7))
    #s=str(input())
    #l=list(map(int,input().split()))
    #l[:0]=s
