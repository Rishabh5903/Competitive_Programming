import sys
input = sys.stdin.readline
from math import sqrt,ceil,floor,lcm,gcd
def solve(C,V,i,ans,s,n):
    if(i>=(n-1)):
        return
    elif(i==(n-2)):
            ans.append(s[i])
            ans.append(s[i+1])
            # ans.append(s[i+2])
    elif(i==(n-3)):
            ans.append(s[i])
            ans.append(s[i+1])
            ans.append(s[i+2])
    elif(i<=(n-4)):
        if(s[i+3] in C):
            ans.append(s[i])
            ans.append(s[i+1])
            ans.append(s[i+2])
            ans.append('.')
            solve(C,V,i+3,ans,s,n)
        else:
            ans.append(s[i])
            ans.append(s[i+1])
            ans.append('.')
            solve(C,V,i+2,ans,s,n)
for _ in range(int(input())):
    #n,m=map(int,input().split())
    n=int(input())
    s=str(input())
    s=s[:len(s)-1]
    ans=[]
    C=['b','c','d']
    V=['a','e']
    solve(C,V,0,ans,s,n)
    print("".join(ans))

    #l=list(map(int,input().split()))
    #l[:0]=s
