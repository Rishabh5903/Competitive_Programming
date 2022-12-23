n=int(input())
li=[]
for i in range(n):
    # n1,n2=map(int,input().split())
    # n1=int(input())
    # s=str(input())
    l=list(map(int,input().split()))
    # l[:0]=s
    for i in l:
        if i>min(l) and i< max(l):
            li.append(i)
for i in li:
    print(i)
