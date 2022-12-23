n=int(input())
li=[]
for i in range(n):
    # n1,n2=map(int,input().split())
    s=str(int(input()))
    # s=str(input())
    # l=list(map(int,input().split()))
    # l[:0]=s
    n1=len(s)
    li.append(9*(n1-1)+int(s)//int('1'*n1))
for i in li:
    print(i)
