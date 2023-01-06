import sys
input = sys.stdin.readline
for _ in range(int(input())):
    #n1,n2=map(int,input().split())
    n1=int(input())
    l=str(input())
    flag=False
    flag2=False
    for j in range(n1-1):
        
        if l[j]=='R' :
            flag2=True
            # print(0)
            # flag=True
            # break
        elif l[j]=='L' and flag2:
            print(0)
            flag=True
            break
        elif l[j]=='L' and l[j+1]=='R':
            print(j+1)
            flag=True
            break
        # print(flag2,flag,l[n1-1])
    if flag2 and (not(flag)) and l[-2]=='L':
        print(0)
        flag=True
    if not flag:
        print(-1)
    #l=list(map(int,input().split()))
    #l[:0]=s
