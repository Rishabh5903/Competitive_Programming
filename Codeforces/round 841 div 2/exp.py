import sys
input = sys.stdin.readline
ans=[]
for i in range(int(input())):
    #n1,n2=map(int,input().split())
    n1=int(input())
    #s=str(input())
    #l=list(map(int,input().split()))
    #l[:0]=s
    if ans==[]:
        ans.append(n1-1)
    else:
        ans.append(max(ans[-1]+1,n1-(i+1)))
for j in ans:
    print(j)
    