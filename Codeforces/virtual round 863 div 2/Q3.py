n=int(input())
li=[]
for i in range(n):
    n1,n2=map(int,input().split())
    # n1=int(input())
    # s=str(input())
    # l=list(map(int,input().split()))
    # l[:0]=s
    ans=[]
    if n1==n2:
        for j in range(n1):
            ans.append(j+1)
        ans[0]=n1
        ans[-1]=1
    elif n1%n2==0:
        ans.append(n2)
        for j in range(n1-2):
            ans.append(j+2)
        ans.append(1)
        ans[n2-1]=n1
        n2 -= 1
        for i in range(1, n1-1):
            if ans[n2] % (i + 1) == 0 and ans[i] % (n2 + 1) == 0:
                ans[i], ans[n2] = ans[n2], ans[i]
                n2 = i   
    else:
        ans.append(-1)
    li.append(ans)

for i in li:
    print(*i)
