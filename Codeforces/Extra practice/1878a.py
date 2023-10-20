import sys
input = sys.stdin.readline
for _ in range(int(input())):
    n,k=map(int,input().split())
    #n=int(input())
    #s=str(input())
    l=list(map(int,input().split()))
    if(k not in l):
        print("NO")
    else:
        print("YES")
    #l[:0]=s
