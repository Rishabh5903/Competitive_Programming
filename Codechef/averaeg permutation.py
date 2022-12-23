n=int(input())
li=[]
for i in range(n):
    N=int(input())
    L=[]
    for j in range(N):
        if j%2==0:
            L.append(j+1)
        else:
            L=[j+1]+L
    li.append(L)
for i in li:
    print(*i)
