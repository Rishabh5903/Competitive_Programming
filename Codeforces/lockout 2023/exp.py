import sys
input = sys.stdin.readline
for _ in range(int(input())):
    #n,m=map(int,input().split())
    #n=int(input())
    a=str(input())
    b=str(input())
    a=a[:len(a)-1]
    b=b[:len(b)-1]
    if len(b)>len(a):
        a,b=b,a
    flag=False
    ans=''
    for j in range(len(b)-1):
        if b[j:j+2] in a:
            flag=True
            ans='*'+b[j:j+2]+'*'
            break
    if flag:
        print('YES')
        print(ans)
    elif b[0]==a[0]:
        print('YES')
        print(b[0]+'*')
    elif b[-1]==a[-1]:
        print('YES')
        print('*'+b[-1])
    else:
        print('NO')
    #l=list(map(int,input().split()))
    #l[:0]=s
