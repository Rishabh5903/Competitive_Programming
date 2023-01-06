import sys
input = sys.stdin.readline
for _ in range(int(input())):
    #n1,n2=map(int,input().split())
    n1=int(input())
    #s=str(input())
    l=list(map(int,input().split()))
    l.sort()
    e=0
    o=0
    flag=True
    for j in range(n1-1):
        if l[j+1]==l[j]:
            print("NO")
            flag=False
            break
        if l[j]%2==0:
            e+=1
        elif l[j]%2==1:
            o+=1
    if flag:
        if l[-1]%2==0:
            e+=1
        else:
            o+=1
        if e>=2 and o>=2:
            print('NO')
            continue
        else:
            print('YES')
    #l[:0]=s
