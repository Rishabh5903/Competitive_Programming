import sys
input = sys.stdin.readline
for _ in range(int(input())):
    n,c=input().split()
    n=int(n)
    c=str(c)
    #n=int(input())
    s=str(input())
    s=s[:n]
    ans=0
    s=s+s
    cnt=0
    j=0
    # print(s)
    # print(len(c),len(s))
    while j< len(s):
        if s[j]==c:
            while j<len(s):
                # print(j,cnt,ans,s[j])
                
                if s[j]=='g':
                    # cnt+=1
                    ans=max(ans, cnt)
                    cnt=0
                    j+=1
                    break
                else:
                    cnt+=1
                    j+=1
                
        else:
            j+=1
    print(ans)
    #l=list(map(int,input().split()))
    #l[:0]=s
