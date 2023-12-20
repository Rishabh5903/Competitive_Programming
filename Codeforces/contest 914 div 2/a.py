import sys
input = sys.stdin.readline
from math import sqrt,ceil,floor,lcm,gcd
for _ in range(int(input())):
    a,b=map(int,input().split())
    x1,y1=map(int,input().split())
    x2,y2=map(int,input().split())
    x=abs(x1-x2)
    y=abs(y1-y2)
    if(x==0 and y!=0):
        if((y==2*a or y==2*b)):
            if(a==0 or b==0):
                print(1)
            else:

                print(2)
        else:
            print(0)
    elif(y==0 and x!=0):
        if((x==2*a or x==2*b)):
            if(a==0 or b==0):
                print(1)
            else:

                print(2)
        else:
            print(0)
    else:
        if(x==a+b and y==a+b):
            if(a==b):
                print(1)
            else:
                print(2)
        elif((x==2*a and y==2*b) or (x==2*b and y==2*a)):
            print(1)
        else:
            print(0)
    #n=int(input())
    #s=str(input())
    #l=list(map(int,input().split()))
    #l[:0]=s
