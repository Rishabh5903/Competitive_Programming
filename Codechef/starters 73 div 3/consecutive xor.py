import sys
input = sys.stdin.readline
for _ in range(int(input())):
    #n1,n2=map(int,input().split())
    n1=int(input())
    #s=str(input())
    l=list(map(int,input().split()))
    if n1%2==1:
        print('YES')
    else:
        xor=l[0]
        for j in l[1:n1-1]:
            xor=xor^j
        if xor==l[-1]:
            print('YES')
        else:
            print('NO')
    #l[:0]=s
