n=int(input())
li=[]
for i in range(n):
    a,b,c=map(int,input().split())
    # n1=int(input())
    # s=str(input())
    # l=list(map(int,input().split()))
    # l[:0]=s
    if b>c:
        li.append(1)
    else:
        if a%b==0:
            li.append(a//b)
        else:
            li.append(a//b+1)
for i in li:
    print(i)
