import sys
input = sys.stdin.readline
from math import sqrt,ceil,floor,lcm,gcd
def chk(s):
    f=1
    for i in range(len(s)-1):
        if(s[i]==s[i+1]):
            f=0
            break
    return f
for _ in range(int(input())):
    n,m=map(int,input().split())
    #n=int(input())
    a=str(input())
    b=str(input())
    a=a[:n]
    b=b[:m]
    if(chk(a)):
        print("YES")
        continue
    if(not chk(b) ):
        print("NO")
        continue
    else:
        if(b[0]!=b[-1]):
            print("NO")
            continue
        else:
            f=1
            for i in range(n-1):
                if(a[i]==a[i+1] and a[i]==b[0]):
                    f=0
                    break
            if(f):
                print("YES")
            else:
                print("NO")
            continue
    #l=list(map(int,input().split()))
    #l[:0]=s
