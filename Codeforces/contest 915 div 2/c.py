import sys
input = sys.stdin.readline
from math import sqrt,ceil,floor,lcm,gcd
for _ in range(int(input())):
    #n,m=map(int,input().split())
    n=int(input())
    s=str(input())
    l=[]
    for i in s:
        l.append(i)
    l.pop()
    
    arr=['.']*n
    maxo=l[-1]
    # l.pop()
    for i in range(-1,-(n+1),-1):
        maxo=max(maxo,l[i])
        arr[n+i]=maxo
    temp=[]
    f=1
    # print(l)
    # print(arr)
    # temp3=l.copy()
    l.sort()
    # if(l==temp3):
    #     print(0)
    #     continue
    for i in range(n):
        if(s[i]!=arr[i] and s[i]!=l[i]):
            f=0
            break
        elif(s[i]==arr[i]):
            temp.append(s[i])
    if(not f):
        print(-1)
        continue
    
    temp2=temp.copy()
    temp2.sort()
    temp2.reverse()
    # print(temp2)
    if(temp==temp2):
        cnt=1
        for i in range(len(temp)-1):
            if(temp[i]==temp[i+1]):
                cnt+=1
            else:
                break
        print(len(temp)-cnt)
    else:
        print(-1)
    # print(*l)
    #l[:0]=s
