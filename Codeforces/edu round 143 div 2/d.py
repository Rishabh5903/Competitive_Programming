import sys
input = sys.stdin.readline
from math import factorial
#n,m=map(int,input().split())
n=int(input())
#s=str(input())
l=list(map(int,input().split()))
prod=1
# k=0
for j in range(n//3):
    a=l[3*j]
    b=l[3*j+1]
    c=l[3*j+2]
    temp=[a,b,c]
    temp.sort()
    
    if a==b==c:
        prod*=3
        # k+=1
    elif temp[0]==temp[1]:
        prod*=2
    else:
        prod*=1
        # k+=1
k=n//3
# print(k)
# print(factorial(k//2))
# print(factorial(k)//((factorial(k//2))**2))
print((prod*factorial(k)//((factorial(k//2))**2))%998244353)

    # l[:0]=s
