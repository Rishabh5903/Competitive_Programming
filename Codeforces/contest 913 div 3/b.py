import sys
input = sys.stdin.readline
from math import sqrt,ceil,floor,lcm,gcd
for _ in range(int(input())):
    #n,m=map(int,input().split())
    #n=int(input())
    s=str(input())
    cap=[]
    small=[]
    for i in range(len(s)-1):
        if(s[i].isupper()):
            if(s[i]=='B' and len(cap)):
                cap.pop()
            elif s[i]!='B':
                cap.append((i,s[i]))
        else:
            if(s[i]=='b' and len(small)):
                small.pop()
            elif s[i]!='b':
                small.append((i,s[i]))
    cap+=small
    cap.sort()
    ans=[]
    for i in cap:
        ans.append(i[1])
    print("".join(ans))
    #l=list(map(int,input().split()))
    #l[:0]=s
