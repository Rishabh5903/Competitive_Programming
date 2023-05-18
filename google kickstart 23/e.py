import sys
input = sys.stdin.readline
for t in range(int(input())):
    #n,m=map(int,input().split())
    #n=int(input())
    s=str(input())
    s=s[:len(s)-1]
    s+=s[0]
    # print(s)
    n=len(s)
    ans=0
    j=1 
    while j<n:
        if s[j]==s[j-1]:
            ans+=1
            j+=2
        else:
            j+=1
    print('Case #'+str(t+1)+':',ans)
    #l=list(map(int,input().split()))
    #l[:0]=s
