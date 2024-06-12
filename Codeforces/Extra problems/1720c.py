import sys
input = sys.stdin.readline
for _ in range(int(input())):
    n,m=map(int,input().split())
    M=[]
    for j in range(n):
        s=str(input())
        l=[]
        l[:0]=s
        # l=list(map(int,input().split()))
        M.append(l)
    f1=0
    f2=0
    f3=0
    f4=0
    cnt=0
    for j in range(m):
        for k in range(n-1):
            # print(k)
            if M[k+1][j]==M[k][j]=='0':
                f1=1
    for j in range(n):
        for k in range(m-1):
            if M[j][k+1]==M[j][k]=='0':
                f1=1
    for j in range(n-1):
        for k in range(m-1):
            if M[j][k+1]==M[j+1][k]=='0' or M[j][k]==M[j+1][k+1]=='0':
                f4=1
    for j in range(m):
        for k in range(n):
            if M[k][j]=='0':
                f2=1
            if M[k][j]=='1':
                f3=1
                cnt+=1
    if not(f3):
        print(0)
        continue
    if f1 or f4:
        print(cnt)
        continue
    if f2:
        print(cnt-1)
        continue
    else:
        print(cnt-2)
    
    
    #n=int(input())

