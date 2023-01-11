import sys
input = sys.stdin.readline
for _ in range(int(input())):
    #n1,n2=map(int,input().split())
    #n1=int(input())
    s=str(input())
    n=len(s)
    # print(s[-1])
    if 'a' in s[1:len(s)-2]:
        print(s[0:(s[1:(len(s)-2)].index('a')+1)],'a',s[s[1:(len(s)-2)].index('a')+2:n-1])
    else:
        print(s[0],s[1:n-2],s[n-2])
    #l=list(map(int,input().split()))
    #l[:0]=s
