import sys
import math
input = sys.stdin.readline
for _ in range(int(input())):
    n1,n2=map(int,input().split())
    #n1=int(input())
    #s=str(input())
    l=list(map(int,input().split()))
    temp=0
    for j in range(n1):
        if l[j]==temp+1:
            temp+=1
    var=n1-temp
    print(math.ceil(var/n2))

    #l[:0]=s
