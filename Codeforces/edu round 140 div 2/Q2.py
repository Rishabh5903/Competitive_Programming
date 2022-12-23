import sys
input = sys.stdin.readline
for _ in range(int(input())):
    #n1,n2=map(int,input().split())
    n1=int(input())
    #s=str(input())
    l=list(map(int,input().split()))
    ans=l[0]
    l=l[1:]
    l.sort()
    for j in l:
        if j>ans:
            ans=((ans+j)//2 if (ans+j)%2==0 else (ans+j)//2+1)
    print(ans)
    
    #l[:0]=s
