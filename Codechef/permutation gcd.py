n=int(input())
li=[]
def solve(N,X,L):
    
    if N==X:
        for i in range(N):
            L.append(i+1)
        return l
    else:
        r=X-N
        L.append(1+r)
        solve()

for i in range(n):
    l1=[]
    l=list(map(int,input().split()))
    N=l[0]
    X=l[1]
    l2=[]
    for j in range(N):
        l2.append(j+1)
    r=X-N
    if X<N:
        li.append(-1)
        continue
    elif X==N:
        li.append(l2)
    else:
        l1.append(1+r)
        l2.remove(1+r)
        for k in l2:
            l1.append(k)
        li.append(l1)




for i in li:
    if type(i)==int:
        print(i)
    else:

         print(*i)
