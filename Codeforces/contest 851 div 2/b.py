import sys
input = sys.stdin.readline
for _ in range(int(input())):
    #n1,n2=map(int,input().split())
    n=int(input())
    s=str(n)
    # print(len(s))
    l=len(s)

    if len(s)==1:
        if n%2==0:
            print(n//2,n//2)
        else:
            print(n//2,n//2+1)
    elif int(s[-1])==9 and int(s[-2])%2==1:
        print(int(str(int(s[:l-1])//2+1)+'4'),int(str(int(s[:l-1])//2)+'5'))
    else:
        if n%2==0:
            print(n//2,n//2)
        else:
            print(n//2,n//2+1)