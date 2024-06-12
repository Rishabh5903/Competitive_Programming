import sys
input = sys.stdin.readline
for _ in range(int(input())):
    #n,m=map(int,input().split())
    n=int(input())
    #s=str(input())
    l=list(map(int,input().split()))
    ans=0
    l.sort()
    i=1
    f=0
    # temp=i
    for j in range(n):

        if l[j]-i>=0:
            ans+=l[j]-i
            f=1
            if j<n-1:
                if l[j+1]!=i:
                    i+=1
        # if not(f and i==j):
        #     # temp=i
        #     i+=1
        #     f=0

    print(ans)
    #l[:0]=s
