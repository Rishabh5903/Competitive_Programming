n=int(input())
li=[]
for i in range(n):
    # n1,n2=map(int,input().split())
    # n1=int(input())
    s=str(input())
    # l=list(map(int,input().split()))
    # l[:0]=s
    s1=''
    for i in range(len(s)):
        s1+=s[-i-1]
    li.append(s+s1)
for i in li:
    print(i)
