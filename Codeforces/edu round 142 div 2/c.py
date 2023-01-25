import sys
input = sys.stdin.readline
for _ in range(int(input())):
    #n1,n2=map(int,input().split())
    n=int(input())
    #s=str(input())
    l=list(map(int,input().split()))
    i=[-1]*(n+1)
    for j in range(n):
        i[l[j]]=j
    ans=0
    # flag=True/
    # print(i)
    # if n%2==0:
    #     for j in range(n//2,0,-1):
    #         # print(j)
    #         if not((i[j]<=i[j+1]<=i[n-j]) and (i[j]<=i[n-j-1]<=i[n-j])) or (i[j]>i[n-j]):
    #             ans+=j
    #             # flag=False
    #             break
    # else:
    for j in range(n//2,0,-1):
        # print(j)
        if not((i[j]<=i[j+1]<=i[n-j+1]) and (i[j]<=i[n-j]<=i[n-j+1])) or (i[j]>i[n-j+1]):
            ans+=j
            # flag=False
            break 
    
    print(ans)


    #l[:0]=s
