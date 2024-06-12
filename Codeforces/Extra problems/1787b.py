import sys
input = sys.stdin.readline
import math
def primeFactors(n):
    d={}
    prod=1
    # Print the number of two's that divide n
    if n%2==0:
        d[2]=1
        prod=2
        n/=2
        while n % 2 == 0:
            d[2]+=1
            n = n / 2
         
    # n must be odd at this point
    # so a skip of 2 ( i = i + 2) can be used
    for i in range(3,int(math.sqrt(n))+1,2):
         
        # while i divides n , print i and divide n
        while n % i== 0:
            if not(i in d):
                prod*=i
                d[i]=1
            else:
                d[i]+=1
            n = n / i
             
    # Condition if n is a prime
    # number greater than 2
    if n > 2:
        if not(int(n) in d):
            d[int(n)]=1
            prod*=int(n)
        else:
            d[int(n)]+=1
    return (d,prod)
# print(primeFactors(100))
for _ in range(int(input())):
    #n,m=map(int,input().split())
    n=int(input())
    d,prod=primeFactors(n)
    l=[]
    for j in d:
        l.append([d[j],j])
    l.sort()
    ans=0
    num=0
    # d=sorted(d)
    # print(d)
    # print(l)
    for j in l:
        ans+=prod*(j[0]-num)
        prod//=j[1]
        num=j[0]
    print(ans)
    #s=str(input())
    #l=list(map(int,input().split()))
    #l[:0]=s
