import sys
input = sys.stdin.readline

    #n1,n2=map(int,input().split())
n=int(input())
a=int(input())
b=int(input())
if n==1 :
    if a==b:
        print(1)
    else:
        print(0)
    print(str(a)+':'+str(b))
    
elif n<=(a+b):
    print(0)
    # a1=a
    # a=min(a, b)
    # b=max(a1,b)
    # flag=True
    if a==0:
        for j in range(n-1):
            print('0:1')
            b-=1
        print('0:'+str(b))
    elif b==0:
        for j in range(n-1):
            print('1:0')
            a-=1
        print(str(a)+':0')
    else:
        a-=1
        b-=1
        for _ in range(n-2):
            if a>0:
                print('1:0')
                a-=1
            elif b>0:
                print('0:1')
                b-=1
        print(str(a+1)+':0')
        print('0:'+str(b+1))


else:
    print(n-(a+b))
    for _ in range(n-(a+b)):
        print('0:0')
    for _ in range(a):
        print('1:0')
    for _ in range(b):
        print('0:1')
#s=str(input())
    #l=list(map(int,input().split()))
    #l[:0]=s

