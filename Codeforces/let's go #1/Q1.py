n=int(input())
# li=[]
ans=0
l=[]
for i in range(n):
    # ans=0
    
    n1,n2=map(int,input().split())
    # n1=int(input())
    # s=str(input())
    # l=list(map(int,input().split()))
    # l[:0]=s
    ans=ans-n1+n2
    l.append(ans)
    # temp=ans
    
    
    # ans=max(temp,ans)
print(max(l))
