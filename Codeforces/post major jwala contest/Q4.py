n=int(input())
li=[]
for i in range(n):
    # n1,n2=map(int,input().split())
    n1=int(input())
    # s=str(input())
    l1=list(map(int,input().split()))
    # l[:0]=s
    l=0
    r=0
    flag=0
    if n1==1:
        li.append('YES'
        )
        continue
    for j in range(1,n1):
        if j!=n1-1:

            if l1[j]==l1[l]:
                r=j
                continue
            
            elif l1[j]>l1[l]:
                if l==0:
                    if flag==0:
                        flag+=1
                        
                    else:
                        flag+=1
                        li.append('NO')
                        break
                elif l1[l-1]>l1[l]:
                    if flag==0:
                        flag+=1
                        
                    else:
                        flag+=1
                        li.append('NO')
                        break
                l=j
                r=j
            elif l1[j]<l1[l]:
                l=j
                r=j
        else:
            if l1[l]>=l1[j]:
                if l==0:
                    if flag==0:
                        flag+=1
                        
                    else:
                        flag+=1
                        li.append('NO')
                        break
                elif l1[l-1]>l1[l]:
                    if flag==0:
                        flag+=1
                        
                    else:
                        flag+=1
                        li.append('NO')
                        break

        # print(flag)
    if flag==0:
        li.append('NO')
    elif flag==1:
        li.append('YES')
for i in li:
    print(i)