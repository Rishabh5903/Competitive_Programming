n=int(input())
li=[]
for i in range(n):
    s=str(input())
    l1=[]
    l=[]
    ans=1
    for j in s:
        if not( j in l) and len(l)<3:
            l.append(j)
        elif (j in l) and len(l)==3:
            continue
        elif len(l)==3:
            ans+=1
            l=l1.copy()
            l.append(j)
    li.append(ans)
for i in li:
    print(i)
