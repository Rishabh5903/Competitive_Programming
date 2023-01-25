import sys
input = sys.stdin.readline
from math import comb
from math import factorial
# print(comb(1,2))
for _ in range(int(input())):
    #n1,n2=map(int,input().split())
    n=int(input())
    ans=0
    # ans+=(factorial(n))**2
    ans+=((n*(n-1)))*(factorial(n))
    # print(ans)
    # for j in range(1,n):
    #     # print(comb(2,2))
    #     ans+=2*j*comb(n,j+1)
    #     print(ans)
    print(ans%(10**9+7))
    # s=str(input())
    # l=list(map(int,input().split()))
    # l[:0]=s
