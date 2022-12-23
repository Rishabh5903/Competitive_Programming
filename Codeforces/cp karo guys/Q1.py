n=int(input())
li=[]
for i in range(n):
    #n1,n2=map(int,input().split())
    n1=int(input())
    #s=str(input())
    l=list(map(int,input().split()))
    l1=[]
    l2=[]
    if l[0]==1:
        li.append(l)
    else:
        l1.append(l[0])
        for j in range(1,l.index(1)):
            # if l[j]==1
            if l[j]<l1[-1]:
                l1.append(l[j])
            else:
                l2.append(l[j])
        ans=[1]
        for j in range(len(l1)):
            ans.append(l1.pop())
        li.append(ans+l2+l[l.index(1)+1:n1])
    #l[:0]=s
for i in li:
    print(*i)
