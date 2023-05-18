import sys
input = sys.stdin.readline
for _ in range(int(input())):
    #n,m=map(int,input().split())
    n=int(input())
    #s=str(input())
    l=list(map(int,input().split()))
    cnt=0
    if n==2:
        if l[0]<=l[1]:
            print('YES')
        else:
            print('NO')
    else:
        lis=[l[0]]
        for j in range(1,n):
            if l[j-1]!=l[j]:
                lis.append(l[j])
        c1=0
        c2=0
        if len(lis)==1:
            print('YES')
            continue
        else:
            if lis[0]<lis[1]:
                print('YES')
                continue
            for j in range(len(lis)-2):
                if lis[j]<lis[j+1]>lis[j+2]:
                    c1+=1
                elif lis[j]>lis[j+1]<lis[j+2]:
                    c2+=1
            if c1==c2 and (c1 or c2):
                print('NO')
            else:
                print('YES')