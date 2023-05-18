import sys
input = sys.stdin.readline
for _ in range(int(input())):
    #n,m=map(int,input().split())
    s=str(input())
    pi=str(314159265358979323846264338327)
    ans=0
    # s=str(n)
    if s[0]==pi[0]:
        ans+=1
    else:
        print(0)
        continue
    for j in range(1,len(s)-1):
        if s[j]==pi[j]:
            ans+=1
        else:
            break
    print(ans)
    #s=str(input())
    #l=list(map(int,input().split()))
    #l[:0]=s
