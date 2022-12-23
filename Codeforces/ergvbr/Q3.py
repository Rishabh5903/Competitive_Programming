from decimal import Decimal as D
n1,x=map(int,input().split())
l=list(map(int,input().split()))
ans=0
for i in range(n1):
    
    if l[i]==x:
        ans+=1
    else:
        num=1
        for j in range(x-l[i]):
            num*=(x-j)
        print(D(1/num))
        ans+=D(1/num)
        # print(num)
        # print(ans)
print(D(ans))
if abs(ans-round(ans))<9*10**(-20):
    print('Yes')
else:
    print('No')