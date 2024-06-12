import sys
input = sys.stdin.readline
from math import log2,floor
for _ in range(int(input())):
    n,m=map(int,input().split())
    #n=int(input())
    a=str(input())
    b=str(input())
    a=a[:n]
    b=b[:m]
    if(b in a):
        print (0)
        continue
    flag=1
    for i in range (m):
        if(b[i] not in a):
            flag=0
            break
    if (not flag):
        print(-1)
        continue
    else:
        # num=1+max(floor(log2(m/n)),0)
        # print(num)
        flag=0
        i=0
        while len(a)<=2**25:
            if(b in a):
                print(i)
                flag=1
                break
            a=a+a
            i+=1
        if(not flag):
            print(-1)
        # print(a)
        # if(b in a):
        #     print(num)
        # else:
        #     print(-1)
        # print(1+floor(log2(m/n)))
    #l=list(map(int,input().split()))
    #l[:0]=s
