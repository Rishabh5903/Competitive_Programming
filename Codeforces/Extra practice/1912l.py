import sys
input = sys.stdin.readline
from math import sqrt,ceil,floor,lcm,gcd
for _ in range(1):
    #n,m=map(int,input().split())
    n=int(input())
    s=str(input())
    f=0
    ans=-1
    # if(n==2):
    #     if(s[0]==s[1]):
    #         print(-1)
    #     else:
    #         print(1)
    #     continue
    for i in range(1,n):
        # print(s[0:i],s[i:])
        if(s[0:i].count('L')!=s[i:].count('L') and s[0:i].count('O')!=s[i:].count('O')):
            f=1
            ans=i
            break
    # if(f):
    print(ans)
    
    #l=list(map(int,input().split()))
    #l[:0]=s
