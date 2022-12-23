n=int(input())
li=[]
for i in range(n):
    N=int(input())
    l=[]
    if N%2==0:
        k=N//2
        l.append(k)
        for j in range(1,N-k):
            l.append(k+j)
            l.append(k-j)
        l.append(N)
    if N%2==1:
        k=N//2+1
        l.append(k)
        for j in range(1,N-k+1):
            l.append(k-j)
            l.append(k+j)
    li.append(l)

for i in li:
    print(*i)
