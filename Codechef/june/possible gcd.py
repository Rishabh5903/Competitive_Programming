n=int(input())
li=[]
import math
for i in range(n):
    l=[]
    n1,n2=map(int,input().split())
    l.append(math.gcd(n1, n2))
    for j in range(1,abs(n1-n2)):
        if math.gcd(n1+j,n2+j) in l:
            continue
        else:
            l.append(math.gcd(n1+j,n2+j))
    li.append(len(l))
for i in li:
    print(i)
