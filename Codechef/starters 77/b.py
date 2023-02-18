import sys
input = sys.stdin.readline
for _ in range(int(input())):
    a,b,c=map(int,input().split())

    if a==b==c:
        print(0)
    else:
        l=[a,b,c]
        l.sort()
        a=l[0]
        b=l[1]
        c=l[2]

        if ((l[2]-l[0])%2!=0 or (c-b)%2!=0 or (b-a)%2!=0):
            print(-1)
        else:
            print((c-b)//2+b-a)
    #n1=int(input())
    #s=str(input())
    #l=list(map(int,input().split()))
    #l[:0]=s
