import sys
input = sys.stdin.readline
for _ in range(int(input())):
    #n1,n2=map(int,input().split())
    n1=int(input())
    #s=str(input())
    l=list(map(int,input().split()))
    odd=[]
    even=[]
    o=0
    e=0
    flag=False
    for j in range(n1):
        if l[j]%2==0:
            e+=1
            even.append(j+1)
        else:
            o+=1
            odd.append(j+1)
        if o>=3:
            print('YES')
            print(*odd[0:3])
            flag=True
            break
        elif o>=1 and e>=2:
            print('YES')
            print(*([odd[0]]+even[0:2]))
            flag=True
            break
    if not(flag):
        print('NO')
    #l[:0]=s
