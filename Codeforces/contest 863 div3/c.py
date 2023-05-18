import sys
input = sys.stdin.readline
for _ in range(int(input())):
    #n,m=map(int,input().split())
    n=int(input())
    #s=str(input())
    l=list(map(int,input().split()))
    ans=[]
    temp=0
    for j in range(n-2):
        if l[j]<l[j+1]:
            if temp==0:
                ans.append(l[j])
                ans.append(l[j])
                temp=1
            else:
                ans.append(l[j])
        else:
            if not(temp):
                ans.append(l[j])
            temp=0
    if temp:
        ans.append(l[-1])
    else:
        ans.append(l[-1])
        ans.append(l[-1])
    print(*ans)
    #l[:0]=s
