n=int(input())
li=[]
for i in range(n):
    n1,n2=map(int,input().split())
    # n1=int(input())
    # s=str(input())
    # l=list(map(int,input().split()))
    # l[:0]=s
    if (n2-n1)%2==1:
        li.append(-1)
    else:
        li.append(n1+(n2-n1)//2)
for i in li:
    print(i)
