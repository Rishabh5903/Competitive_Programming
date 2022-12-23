n=int(input())
li=[]
for i in range(n):
    # n1,n2=map(int,input().split())
    n1=int(input())
    M=[]
    ans=[]
    
    for j in range(n1):
        l=str(input())
        # l=list(map(int,input().split()))
        M.append(l)
        ans.append([j+1])
    for j in range(n1):
        for k in range(n1):
            # print(M[k][j])
            if M[k][j]=='1':
                ans[j].append(k+1)
    li.append(ans)
    # l[:0]=s
    # print(M)
    # print(ans)
# print(li)
for i in li:
    for j in i:
        print(len(j),*j)
