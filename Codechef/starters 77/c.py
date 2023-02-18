import sys
input = sys.stdin.readline
for _ in range(int(input())):
    n,k=map(int,input().split())
    #n1=int(input())
    #s=str(input())
    l=list(map(int,input().split()))
    val=0
    for j in range(n//2):
        val+=abs(l[j]-l[-(j+1)])
    if val%k==0:
        print('YES')
    else:
        print('NO')
    #l[:0]=s
