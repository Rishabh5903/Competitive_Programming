import string
n=int(input())
li=[]
for i in range(n):
    # n1,n2=map(int,input().split())
    n1=int(input())
    s=str(input())
    # l=list(map(int,input().split()))
    # l[:0]=s
    ans=0
    for i in s:
        ans=max(ans,string.ascii_lowercase.index(i)+1)
    li.append(ans)
for i in li:
    print(i)
