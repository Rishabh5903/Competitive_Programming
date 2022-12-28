import sys
input = sys.stdin.readline
for _ in range(int(input())):
    #n1,n2=map(int,input().split())
    n1=int(input())
    #s=str(input())
    l=list(map(int,input().split()))
    prod=1
    for j in l:
        prod*=j
    print(2022*(prod+n1-1))
    #l[:0]=s
