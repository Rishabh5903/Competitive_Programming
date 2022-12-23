import math
n=int(input())
li=[]
for i in range(n):
    #n1,n2=map(int,input().split())
    n1=int(input())
    #s=str(input())
    l=list(map(int,input().split()))
    hcf=l[0]
    ans=[]
    for j in l:
        hcf=math.gcd(hcf,j)
    for j in l:
        ans.append(j//hcf)
    # print(hcf)
    li.append(ans)
    #l[:0]=s
for i in li:
    print(*i)
