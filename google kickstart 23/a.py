# print(ord('c')-97
import sys
input = sys.stdin.readline
for t in range(int(input())):
    #n,m=map(int,input().split())
    
    
    l=list(map(int,input().split()))
    n=int(input())
    ans=[]
    for j in range(n):
        s=str(input())
        temp=[]
        for k in range(len(s)-1):
            # print(ord(s[k])-65)
            temp.append(str(l[ord(s[k])-65]))
        ans.append(''.join(temp))
    ans.sort()
    # print(ans)
    f=0
    for j in range(n-1):
        if ans[j]==ans[j+1]:
            f=1
            break
    if f:
        print('Case #'+str(t+1)+': YES')
    else:
        print('Case #'+str(t+1)+': NO')

    #l[:0]=s
