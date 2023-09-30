import sys
input = sys.stdin.readline
for _ in range(int(input())):
    #n,m=map(int,input().split())
    #n=int(input())
    s=str(input())
    s=s[:len(s)-1]
    if s[1]=='.' or s[2]=='.':
        d,m,y=s.split('.')
        if(len(d)==1):
            d="0"+d
        if(len(m)==1):
            m="0"+m
        if(len(y)==1):
            y="000"+y
        if(len(y)==2):
            y="00"+y
        if(len(y)==3):
            y="0"+y
        ans1=d+"."+m+"."+y
        ans2=m+"/"+d+"/"+y
        print(ans1,ans2)
        # print("debug")
        # print(m+"/"+d+"/"+y)
    else:
        m,d,y=s.split('/')
        if(len(d)==1):
            d="0"+d
        if(len(m)==1):
            m="0"+m
        if(len(y)==1):
            y="000"+y
        if(len(y)==2):
            y="00"+y
        if(len(y)==3):
            y="0"+y
        ans1=d+"."+m+"."+y
        ans2=m+"/"+d+"/"+y
        print(ans1,ans2)
        # print()
    #l=list(map(int,input().split()))
    #l[:0]=s
