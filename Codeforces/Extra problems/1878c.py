import sys
input = sys.stdin.readline
from math import sqrt,ceil,floor,lcm,gcd
# sys. setrecursionlimit(100000000)

for _ in range(int(input())):
    n,k,x=map(int,input().split())
    min_sum = (k * (k + 1)) // 2
    max_sum = (n * (n + 1)) // 2 - ((n - k) * (n - k + 1)) // 2
    if x >= min_sum and x <= max_sum:
        print( "YES")   
    else:
        print( "NO")   #n=int(input())
    #s=str(input())
    #l=list(map(int,input().split()))
    #l[:0]=s
