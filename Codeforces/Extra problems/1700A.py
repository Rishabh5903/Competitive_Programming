n=int(input())
li=[]
for i in range(n):
    l=list(map(int,input().split()))
    N=l[0]
    M=l[1]
    li.append(int(M*(N**2+N+M-1)/2))
for i in li:
    print(i)
