import sys
input = sys.stdin.readline
for _ in range(int(input())):
    #n1,n2=map(int,input().split())
    n1=int(input())
    s=str(input())
    l=[]
    for j in range(n1):
        if s[j]=='1':
            l.append(j)
    ans=float('inf')
    for j in range(1,len(l)):
        if (l[j]-l[j-1]-1)%2==0:
            ans=1
            # print(ans)
            break
        else:
            ans=2
    print(ans)


    #l=list(map(int,input().split()))
    #l[:0]=s
