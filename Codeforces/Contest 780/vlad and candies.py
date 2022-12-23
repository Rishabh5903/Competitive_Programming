n=input()
n=int(n)
ans=[]
for i in range(n):
    n1=input()
    n1=int(n1)
    n2=input()
    li=list(n2.split())
    if n1==1:
        if int(li[0])>1:
            ans.append("NO")
        elif int(li[0])==1:
            ans.append("YES")
    else:
        S=0
        M=int(li[0])
        for j in li:
            j=int(j)
            S+=j
            if j>M:
                M=j
        if 2*M-S>=2:
            ans.append("NO")
        else:
            ans.append("YES")
for i in ans:
    print(i)



