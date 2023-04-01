import sys
input = sys.stdin.readline
for _ in range(int(input())):
    #n,m=map(int,input().split())
    n=int(input())
    #s=str(input())
    l=list(map(int,input().split()))
    cnt=0
    for j in l:
        if j<0:
            cnt+=1
    ans1=[]
    temp=0
    for j in range(n-cnt):
        temp+=1
        ans1.append(temp)
    for j in range(cnt):
        temp-=1
        ans1.append(temp)
    print(*ans1)
    ans1=[]
    temp=0
    for j in range(cnt):
        ans1.append(1)
        ans1.append(0)
    for j in range(n-len(ans1)):
        # if len(ans1)>0:1
        temp+=1
        ans1.append(temp)
    print(*ans1)


    #l[:0]=s
