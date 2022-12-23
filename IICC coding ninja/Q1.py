n=int(input())
li=[]
for i in range(n):
    s=str(input())
    ans=1
    l=[]
    l[:0]=s
    l.reverse()
    n1=int(input())
    l1=list(map(int, input().split()))
    sum=0

    for j in l1:
        s1=bin(j)
        if len(s1)-2<=len(l):
            sum+=len(s1)-2
        else:
            ans=0
            break
    if sum==len(l):
        for j in l1:
            s1=bin(j)
            for k in range(2,len(s1)):
                if int(l[-1])==int(s1[k]):
                    l.pop()
                else:
                    ans=0
                    break
    else:
        ans=0
        

    li.append(ans)
    
            
for i in li:
    print(i)
