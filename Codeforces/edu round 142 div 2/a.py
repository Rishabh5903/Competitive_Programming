import sys
input = sys.stdin.readline
for _ in range(int(input())):
    #n1,n2=map(int,input().split())
    n1=int(input())
    #s=str(input())
    l=list(map(int,input().split()))
    c=l.count(1)
    

    print(c//2+n1-2*(c//2))
    #l[:0]=s
