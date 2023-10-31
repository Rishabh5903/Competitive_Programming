import sys
input = sys.stdin.readline
from math import sqrt,ceil,floor,lcm,gcd
for _ in range(int(input())):
    #n,m=map(int,input().split())
    n=int(input())
    s=str(input())
    # l=list(map(int,input().split()))
    l=[]
    for i in range(n):
        l.append(int(s[i]))
    ans=[-1]*n
    # print(l)
    prev=0
    for i in range(1,n-sum(l)+1):
        cnt=prev
        k=i+prev
        while (k<=n):
            if(l[-k]==0):
                ans[i-1]=cnt
                
                if(i>=2):
                    ans[i-1]+=ans[i-2]
                prev=cnt
                l[-i],l[-k]=l[-k],l[-i]
                break
            else:
                cnt+=1
                k+=1
            # k+=1
    print(*ans)


    # print(s)
    #l[:0]=s
