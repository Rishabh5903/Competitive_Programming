import sys
input = sys.stdin.readline
for _ in range(int(input())):
    n,p=map(int,input().split())
    m=[]
    for j in range(n):
        l=list(map(int,input().split()))
        m.append(l)
    cnt=0
    # print(m)
    for j in range(n):
        for k in range(n):
            # print(j,k, m[j][k],m[n-1-j][n-1-k])
            if m[j][k]!=m[n-1-j][n-1-k]:
                cnt+=1
    if  p>=cnt//2:
        if n%2==0:
            if (p-cnt//2)%2==0:
                print('YES')
            else:
                print('NO')
        else:
            print('YES')
    else:
        print('NO')
    #n=int(input())
    #s=str(input())
    
    #l[:0]=s
