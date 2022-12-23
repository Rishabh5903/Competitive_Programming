n=int(input())
li=[]
for i in range(n):
    n1,n2=map(int,input().split())
    # n1=int(input())
    # s=str(input())
    # l=list(map(int,input().split()))
    # l[:0]=s/
    if n2<n1:
        li.append('LOSS')
    elif n2==n1:
        li.append('NEUTRAL')
    else:
        li.append('PROFIT')
for i in li:
    print(i)
