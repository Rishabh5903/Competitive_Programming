n=int(input())
L=[]
for i in range(n):
    n1=int(input())
    
    l=list(map(int,input().split()))
    if len(l)==1 or len(l)==2:
        L.append('YES')
    else:
        if l[0]%2==0 and l[1]%2==0:
            for j in range(1,len(l)//2):
                if l[2*j]%2==0 and l[2*j-1]%2==0:
                    continue
                elif j==len(l)//2-1 and l[2*j]%2==0 and l[2*j-1]%2==0:
                    L.append('YES')
                else:
                    L.append('NO')

        elif l[0]%2==0 and l[1]%2==1:
            for j in range(1,len(l)//2):
                if l[2*j]%2==0 and l[2*j-1]%2==1:
                    continue
                elif j==len(l)//2-1 and l[2*j]%2==0 and l[2*j-1]%2==1:
                    L.append('YES')                
                else:
                    L.append('NO')

        elif l[0]%2==1 and l[1]%2==1:
            for j in range(1,len(l)//2):
                if l[2*j]%2==1 and l[2*j-1]%2==1:
                    continue
                elif j==len(l)//2-1 and l[2*j]%2==1 and l[2*j-1]%2==1:
                    L.append('YES')                
                else:
                    L.append('NO')

        elif l[0]%2==1 and l[1]%2==0:
            for j in range(1,len(l)//2):
                if l[2*j]%2==1 and l[2*j-1]%2==0:
                    continue
                elif j==len(l)//2-1 and l[2*j]%2==1 and l[2*j-1]%2==0:
                    L.append('YES')                
                else:
                    L.append('NO')
for k in L:
    print(k)
print(L)