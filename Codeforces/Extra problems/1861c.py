import sys
input = sys.stdin.readline
from math import sqrt,ceil,floor,lcm,gcd
for _ in range(int(input())):
    #n,m=map(int,input().split())
    #n=int(input())
    s=str(input())
    s=s[:len(s)-1]
    prev='2'
    # p=0
    # m=0
    tot=0
    f=1
    pre=0
    temp=0
    for i in range(len(s)):
        if(s[i]=='+'):
            # p+=1
            tot+=1
            temp+=1
        elif(s[i]=='-'):
            # m+=1
            tot-=1
            temp-=1
        elif(s[i]=='0'):
            if(tot<2 ):
                f=0
                break
            elif(prev=='1'):
                i-=1
                suf=0
                while(i>=0 and (s[i]=='+' or s[i]=='-')):
                    if(s[i]=='+'):
                        suf+=1
                    else:
                        suf-=1
                    if(suf>0):
                        break
                    i-=1
                if(suf<=0):
                    f=0
                    break
            prev='0'
            # m=0
            # p=0
            pre=0
            temp=0
        else:
            if((prev=='0' and not(pre))):
                f=0
                break
            prev='1'
            # m=0
            # p=0
            pre=0
            temp=0
        if(temp<0):
            pre=1 
    if(f):
        print("YES")
    else:
        print("NO")
    #l=list(map(int,input().split()))
    #l[:0]=s
