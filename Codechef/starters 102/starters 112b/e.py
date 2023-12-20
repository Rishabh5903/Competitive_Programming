import sys
input = sys.stdin.readline
from math import sqrt,ceil,floor,lcm,gcd
t,s=map(int,input().split())
def solve(n,l):
        l.sort()
        # if(s==0):
        if(n==2):
            return(l[1])
            # continue
        
        ans=0
        for i in range(ceil(n/2)):
            ans+=l[i]
        if(n%2==0):
            ans-=l[0]
            ans+=l[n//2]
        return (ans)
for _ in range(t):
    
        n=int(input())
        #s=str(input())
        l=list(map(int,input().split()))
        l.sort()
        if(s==0):
            if(n==2):
                print(l[1])
                continue
            
            ans=0
            for i in range(ceil(n/2)):
                ans+=l[i]
            if(n%2==0):
                ans-=l[0]
                ans+=l[n//2]
            print(ans)
        else:
            prev=l.copy()
            for i in range(1,n):
                prev[i]+=prev[i-1]
            tot=prev[-1]
            ans=0
            for i in range(n):
                temp=n-i
                var=prev[i+ceil(temp/2)-1]
                if(i>=1):
                    var-=prev[i-1]
                if(temp%2==0):

                    var-=l[i]
                    var+=l[i+temp//2]
                if(var>=(tot-var)):
                    ans=max(ans,var)
            print(ans)
    #l[:0]=s
