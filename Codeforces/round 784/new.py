n=int(input())
L=[]
l1=[]
for i in range(n):
    n1=int(input())
    
    l=list(map(int,input().split()))
    if len(l)==1 or len(l)==2:
        L.append('YES')
    for j in range(1,len(l//2)):
        l1.append(l[2*i-1])
    for j in range(0,len(l)):
        if l[0]%2==0:
            if l[j]%2==0:
                continue
            else:
                L.append('NO')
        elif l[0]%2==1:
            if l[j]%2==1:
                continue
            else:
                L.append('NO')  
    for j in range(0,len(l1)):
        if l1[0]%2==0:
            if l1[j]%2==0:
                continue
            else:
                L.append('NO')
        elif l1[0]%2==1:
            if l1[j]%2==1:
                continue
            else:
                L.append('NO')
for  i in L:
    print(i)                   