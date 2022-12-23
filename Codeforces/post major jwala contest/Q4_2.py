n=int(input())
li=[]
for i in range(n):
    # n1,n2=map(int,input().split())
    n1=int(input())
    # s=str(input())
    l=list(map(int,input().split()))
    # flag=True
    # l[:0]=s
    count=0
    l1=[l[0]]
    for j in range(1,n1):
        if l[j]!=l[j-1]:
            l1.append(l[j])
    # print(l1)
    if len(l1)==1:
        li.append('YES')
        continue
    for j in range(len(l1)-1):
        if l1[j+1]>l1[j]:
            if j==0:
                if count==0:
                    count+=1
                else:
                    count+=1
                    # li.append('NO')
                    break
            elif l1[j-1]>l1[j]:
                if count==0:
                    count+=1
                else:
                    count+=1
                    # li.append('NO')
                    break
    if l1[len(l1)-2]>l1[len(l1)-1]:
        count+=1
    if count==0 or count>1:
        li.append('NO')
    else:
        li.append('YES')
for i in li:
    print(i)
