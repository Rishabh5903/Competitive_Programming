n=int(input())
li=[]
for i in range(n):
    n1=int(input())
    l=list(str(input()))
    if n1==1:
        li.append([0])
        continue
    lis=[]
    for j in range(n1):
        
        ans=0
        l1=l.copy()
        k=j+1
        n2=len(l1)
        # for z in range(k):
        for m in range(n2//2):
            # while k>0
            if k>0:
                if l1[m]=='L':
                    l1[m]='R'
                    k-=1
                    ans+=len(l)-(m+1)
                elif l1[m]=='R':
                    ans+=len(l)-(m+1)
                if k>0:
                    if l1[-(m+1)]=='R':
                        l1[-(m+1)]='L'
                        k-=1
                        ans+=len(l)-(m+1)
                    elif l1[-(m+1)]=='L':
                        ans+=len(l)-(m+1)
                    continue
                elif k==0:
                    if l1[-(m+1)]=='R':
                        # l1[-(m+1)]='L'
                        # k-=1
                        ans+=m
                    elif l1[-(m+1)]=='L':
                        ans+=len(l)-(m+1)


            else:
                if l1[m]=='L':
                    # l1[m]='R'
                    # k-=1
                    ans+=m
                elif l1[m]=='R':
                    ans+=len(l)-(m+1)
                if l1[-(m+1)]=='R':
                    # l1[-(m+1)]='L'/
                    # k-=1
                    ans+=m
                elif l1[-(m+1)]=='L':
                    ans+=len(l)-(m+1)

        if n2%2==1:
            ans+=n2//2


        lis.append(ans)
        # print(*lis)
    li.append(lis)
    # print(*lis)

        
            
for i in li:
    print(*i)
