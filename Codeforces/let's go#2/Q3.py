n=int(input())
li=[]
for i in range(n):
    # n1,n2=map(int,input().split())
    n1=int(input())
    # s=str(input())
    # l=list(map(int,input().split()))
    # l[:0]=s
    ans=[]

    for j in range(n1):
        ans.append([])
    count=0
    if n1==1:
        li.append(1)
        continue
    elif n1==2:
        li.append(-1)
        continue
    
    else:
        for j in range(n1**2):
            if j%2==0:
                if len(ans[count])<n1:
                    ans[count].append(j+1)
                else:
                    count+=1
                    ans[count].append(j+1)
        for j in range(n1**2):
            if j%2==1:
                if len(ans[count])<n1:
                    ans[count].append(j+1)
                else:
                    count+=1
                    ans[count].append(j+1)
    li.append(ans)
for i in li:
    if type(i)==int:
        print(i)
    else:
        for j in i:
            print(*j)
