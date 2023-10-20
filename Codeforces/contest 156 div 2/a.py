import sys
input = sys.stdin.readline
for _ in range(int(input())):
    #n,m=map(int,input().split())
    n=int(input())
    if(n<=6):
        print("No")
    else:
        if((n-3)%3):
            print("Yes")
            print(1,2,n-3)
        elif ((n-5)!=4 and (n-5)%3):
            print("YES")
            print(1,4,n-5)
        else:
            print("NO")
    #s=str(input())
    #l=list(map(int,input().split()))
    #l[:0]=s
