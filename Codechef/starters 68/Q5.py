n=int(input())
li=[]
for i in range(n):
    # n1,n2=map(int,input().split())
    n1=int(input())
    s=str(input())
    # l=list(map(int,input().split()))
    # l[:0]=s
    l=[]
    count=1
    
    for j in range(n1-1):
        if s[j+1]==s[j]:
            count+=1
        else:
            l.append((count,s[(j-count+1):(j+1)]))
            count=1
    
    l.append((count,s[n1-count:n1]))
    l.sort()
    # ans=0
    # print(l)
    if len(l)==1:
        li.append(l[0][0]-1)
        continue
    # for j in range(1,len(l)+1):
    #     if l[-(j+1)][1]==l[-j][1]:
    #         if ans==0:
    #             ans=2
    #         else:

    #             ans+=1
    #     else:
    #         break
    flag1=True
    flag2=True
    # print(l)
    for j in range(len(l)):
        # print(l[j][0]==1)
        # print(not(l[j] in l[0:j]))
        if (l[j][0]==1) :
            continue
        else:
            flag1=False
            break
    if flag1:
        for j in range(len(l)):
            if not(l[j] in (l[0:j])):
                continue
            else:
                flag2=False
                break
        if flag2:
            li.append(0)
            continue
        else:
            li.append(1)
            continue
        # li.append(0)
        # continue
    flag3=True
    flag4=True
    for j in range(1,len(l)+1):
        if l[-(j+1)][0]==l[-1][0]:
            if l[-(j+1)][1]==l[-j][1]:
                flag3=False
                break
        else:
            flag4=False
            break
    
    if not(flag3):
        li.append(l[-1][0])
    else:
        li.append(l[-1][0]-1)
for i in li:
    print(i)
