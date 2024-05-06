import sys
input = sys.stdin.readline
for _ in range(1):
    a,b=map(int,input().split())
    f=1
    for i in range(1000):
        if not(f):
            break
        temp=a+9*i
        s=str(temp)
        for j in range(len(s)):
            if(int(s[j:])==b):
                print("Stable")
                print("+",i)
                print("-",j)
                f=0
                break
    if f:
        print("Broken")
    #n=int(input())
    #s=str(input())
    #l=list(map(int,input().split()))
    #l[:0]=s
