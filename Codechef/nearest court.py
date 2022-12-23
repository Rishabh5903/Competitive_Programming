n=int(input())
li=[]
for i in range(n):
    l=list(map(int,input().split()))
    X=l[0]
    Y=l[1]
    Z=(X+Y)//2
    li.append(max(abs(X-Z),abs(Y-Z)))
for i in li:
    print(i)
