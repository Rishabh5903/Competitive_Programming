def gcd(p,q):
# Create the gcd of two positive integers.
    while q != 0:
        p, q = q, p%q
    return p
n=int(input())
li=[]
for i in range(n):
    # n1,n2=map(int.input().split())
    n1=int(input())
    # s=str(input())
    l=list(map(int,input().split()))
    if l[-1]==1:
        li.append(2*n1)
        continue
    else:
        flag=True
        for j in range(2,n1+1):
            if gcd(l[-j],l[-1])==1:
                li.append(n1-j+1+n1)
                flag=False
                break
        if flag:
            li.append(-1)
for i in li:
    print(i)
