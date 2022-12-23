n=int(input())
li=[]
for i in range(n):
    l=list(map(int,input().split()))
    N=l[0]
    X=l[1]
    if N<=X:
        li.append(0)
    elif (N-X)%4==0:
        li.append(int((N-X)/4))
    else:
        li.append((N-X)//4+1)
for i in li:
    print(i)
