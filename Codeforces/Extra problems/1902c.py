import sys
input = sys.stdin.readline
from math import sqrt,ceil,floor,lcm,gcd
def mex(l):
    num=1
    for i in range(len(l)):
        if(l[i]!=num):
            break
        else:
            num+=1
    return num
for _ in range(int(input())):
    #n,m=map(int,input().split())
    n=int(input())
    #s=str(input())
    l=list(map(int,input().split()))
    l.sort()
    temp=[]
    num=0
    for i in range(n-1):
        temp.append(l[-1]-l[i])
        if(i==0):
            num=temp[0]
        else:
            num=gcd(num,temp[i])

    for i in range(n-1):
        temp[i]=temp[i]//num
    temp.reverse()
    temp.append(mex(temp))
    # print(temp)
    print(sum(temp))
    #l[:0]=s
