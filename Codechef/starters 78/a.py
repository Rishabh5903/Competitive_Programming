import sys
input = sys.stdin.readline
for _ in range(int(input())):
    n,x=map(int,input().split())
    if x>n+1 or x<1-n:
        print(-1)
    else:
        if x==0:
            ans=''
            if n%2==1:

                ans+='+'*(n//2)
                ans+='-'*(n//2+1)
                print(ans)
            else:
                ans+='*'
                ans+='+'*(n//2-1)
                ans+='-'*(n//2)
                print(ans)
        elif x>0:
            ans=''
            ans+='+'*(x-1)
            ans+='*'*(n-x+1)
            print(ans)
        else:
            ans=''
            ans+='-'*(abs(x)+1)
            ans+='*'*(n-abs(x)-1)
            print(ans)


    #n=int(input())
    #s=str(input())
    #l=list(map(int,input().split()))
    #l[:0]=s
