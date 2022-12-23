import sys
input = sys.stdin.readline
for _ in range(int(input())):
    #n1,n2=map(int,input().split())
    n1=int(input())
    s=str(input())
    sum=(0 if s[0]=='0' else 1)
    l=[]
    for j in range(1,n1):
        if sum==0:
            if s[j]=='0': 
                l.append('+')
            else:
                l.append('+')
                sum+=1
        else:
            if s[j]=='0':
                l.append('+')
            else:
                l.append('-')
                sum-=1
    print(''.join(l))
    #l=list(map(int,input().split()))
    #l[:0]=s
