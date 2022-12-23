
n1,n2=map(int,input().split())
# n1=int(input())
# s=str(input())
# l=list(map(int,input().split()))
if n1==n2==0:
    print(0,0)
elif n1>0 and n2==0:
    print(n1,n1)
elif n1==0 and n2>0:
    print('Impossible')
elif n1<n2:
    print(n2,n2+n1-1)
else:
    print(n1,n1+n2-1)