import sys
input = sys.stdin.readline
from math import sqrt,ceil,floor,lcm,gcd
for _ in range(int(input())):
    #n,m=map(int,input().split())
    n=int(input())
    if(n<=2):
        print(-1)
    else:
        if(n%3==0):
            print(n//3,n//3,n//3)
        else:
            if(n%2==1):
                # if(((n-1)//2)%2==0):
                    print(1,1,(n-1)//2)
                # else:
                #     print(1,2,(n-2)//3)
            else:
                if(((n-2)//2)%2==0):
                    print(1,2,(n-2)//2)
                else:
                    print(-1)
    #s=str(input())
    #l=list(map(int,input().split()))
    #l[:0]=s
