n=int(input())
li=[]
for i in range(n):
    n1,n2=map(int,input().split())
    #n1=int(input())
    #s=str(input())
    l=list(map(int,input().split()))
    prod=1
    for j in l:
        prod*=j
    # print(prod)
    if prod%n2==0:
        print('YES')
    else:
        print('NO')
    #l[:0]=s
for i in li:
    print(i)
