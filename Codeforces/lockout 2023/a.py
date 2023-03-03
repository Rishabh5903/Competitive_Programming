import sys
input = sys.stdin.readline

    #n,m=map(int,input().split())
n=int(input())
#s=str(input())
m=[]
for j in range(n//3):
    l=list(map(int,input().split()))
    m.append(l)
k=n//3
if n//3==1 or n//3==2:
    print(-1)
else:

    for j in range(n//3-1):
        m[j+1][1],m[j][1]=m[j][1],m[j+1][1]
        m[k-j-1][2],m[k-j-2][2]=m[k-j-2][2],m[k-j-1][2]
    for j in m:
        print(*j)
#l[:0]=s
