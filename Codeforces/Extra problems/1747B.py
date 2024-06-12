import sys
import math
input = sys.stdin.readline
for _ in range(int(input())):
    #n1,n2=map(int,input().split())
    n1=int(input())
    if n1==1:
        print(1)
        print(1,2)
        continue
    else:
        print(int(math.ceil(n1/2)))
        # print(2,6)
        for j in range(int(math.ceil(n1/2))):
            
            print(3*j+1,3*(n1-j))
    #s=str(input())
    #l=list(map(int,input().split()))
    #l[:0]=s
