import sys
input = sys.stdin.readline
for _ in range(int(input())):
    #n1,n2=map(int,input().split())
    n1=int(input())
    #s=str(input())
    l=list(map(int,input().split()))
    if l[0]==l[-1]:
        print("NO")
    else:
        print("YES")
        ans=[]
        for j in range(n1//2):
            ans.append(l[j])
            ans.append(l[-(j+1)])
        if n1%2==1:
            ans.append(l[n1//2])
        print(*ans)
    #l[:0]=s
