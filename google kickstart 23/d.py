l=['A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z']
import sys
input = sys.stdin.readline
from math import ceil,sqrt
for t in range(int(input())):
    #n,m=map(int,input().split())
    n=int(input())
    k=ceil((-39+sqrt(39**2-52*(26-n)))/26)
    f=n-13*(k)*(k+1)
    # print(k,f)
    # if k==0:
    #     print('Case #'+str(t+1)+':',l[n-1])
    # else:

    print('Case #'+str(t+1)+':',l[ceil(f/(k+1))-1])
    #s=str(input())
    #l=list(map(int,input().split()))
    #l[:0]=s
