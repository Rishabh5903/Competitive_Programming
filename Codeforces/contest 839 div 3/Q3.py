import math
import sys
input = sys.stdin.readline
for _ in range(int(input())):
    k,n1=map(int,input().split())
    n=n1-k
    num=int((math.sqrt(8*n+1)-1)//2)
    ans=[1]
    for j in range(num):
        if len(ans)<k:
            ans.append(ans[-1]+j+2)
    while len(ans)<k:

        ans.append(ans[-1]+1)
    print(*ans)
    #n1=int(input())
    #s=str(input())
    #l=list(map(int,input().split()))
    #l[:0]=s
