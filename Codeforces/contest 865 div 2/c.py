import sys
input = sys.stdin.readline
for _ in range(int(input())):
    #n,m=map(int,input().split())
    n=int(input())
    #s=str(input())
    l=list(map(int,input().split()))
    if n==2:
        if l[0]<=l[1]:
            print('YES')
        else:

            print('NO')
        continue
    for j in range(n-2):
        # if l[j+1]<l[j]:
            temp=l[j]-l[j+1]
            l[j+2]=l[j+2]+temp
            l[j+1]=l[j]
        # elif l[j]<l[j+1]:
        #     temp=l[j]-l[j+1]
            
    # print(l)
    if l[-1]>=l[-2]:
        print('YES')
    elif n%2==1:
        print('YES')
    else:
        print('NO')
    #l[:0]=s
