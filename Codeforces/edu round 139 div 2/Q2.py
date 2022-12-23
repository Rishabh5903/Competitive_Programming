n=int(input())
li=[]
for i in range(n):
    #n1,n2=map(int,input().split())
    n1=int(input())
    s=str(input())
    #l=list(map(int,input().split()))
    #l[:0]=s
    l1=[]
    j=0
    flag=False
    while j<(n1-1):
        l1.append((s[j:j+2],j))
        j+=1
    l1.sort()
    for j in range(len(l1)-1):
        if l1[j+1][0]==l1[j][0]:
            if not(l1[j+1][1]==l1[j][1]+1):
                flag=True
                break
        if j<=len(l1)-3:
            if l1[j+2][0]==l1[j][0]:
                if not(l1[j+2][1]==l1[j][1]+1):
                    flag=True
                    break
    if flag:
        li.append('YES')
    else:
        li.append('NO')
    # print(l1)

        
for i in li:
    print(i)
