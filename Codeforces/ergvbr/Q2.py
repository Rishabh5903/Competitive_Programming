n=int(input())
li=[]
for i in range(n):
    # n1,n2=map(int.input().split())
    n1=int(input())
    # s=str(input())
    # l=list(map(int,input().split()))
    # l[:0]=s
    ans=[]
    if n1%2==0:
        ans.append(n1//2+1)
        for j in range(n1//2-1):
            ans.append(j+1)
            ans.append(n1//2+1+j+1)
        ans.append(n1//2)
    else:
        ans.append(n1//2+1)
        for j in range(n1//2):
            ans.append(j+1)
            ans.append(n1//2+1+j+1)
    li.append(ans)
        
for i in li:
    print(*i)
