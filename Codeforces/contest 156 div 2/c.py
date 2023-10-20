import sys
input = sys.stdin.readline
from math import ceil,sqrt
ans=[]
for _ in range(int(input())):
    #n,m=map(int,input().split())
    
    s=str(input())
    n=len(s)-1
    k=int(input())
    s=s[:n]
    if(n==1):
        ans.append(s)
        continue
    p=(n*(n+1))/2-k+1
    l=int(ceil((sqrt(1+8*p)-1)/2))
    pos=int(k+((l)*(l+1))/2-(n*(n+1))/2)
    # cnt=1
    # print(p,l)
    # print(pos,'debug')
    lis=[]
    num=n-l
    for i in range(n):
        if num:
            if i == n - 1:
                while num and lis and s[i] < lis[-1]:
                    lis.pop()
                    num -= 1
                lis.append(s[i])
                while num:
                    lis.pop()
                    num -= 1
            else:
                while num and lis and s[i] < lis[-1]:
                    lis.pop()
                    num -= 1
                lis.append(s[i])
        else:
            lis.append(s[i])
    # print(lis)
    ans.append(lis[pos-1])

    # lis=[]
    # for i in range(n):
    #     lis.append((s[i],i+1))
    # lis.sort()
    # lis1=[]
    # for i in range(l):
    #     lis1.append((lis[i][1],lis[i][0]))
    # lis1.sort()
    # ans.append(lis1[-pos][1])
# print(ans)
print(''.join(ans))
    #l=list(map(int,input().split()))
    #l[:0]=s
