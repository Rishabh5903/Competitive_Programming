import sys
input = sys.stdin.readline
for _ in range(int(input())):
    n,s1,s2=map(int,input().split())
    #n=int(input())
    #s=str(input())
    lis=list(map(int,input().split()))
    a=[]
    b=[]
    l=[]
    for j in range(n):
        l.append((lis[j],j+1))
    l.sort()
    l.reverse()
    i1=1
    i2=1
    for j in range(n):
        if s1*i1<s2*i2:
            a.append(l[j][1])
            i1+=1
        elif s1*i1>s2*i2:
            b.append(l[j][1])
            i2+=1
        else:
            if s1<=s2:
                a.append(l[j][1])
                i1+=1
            else:
                b.append(l[j][1])
                i2+=1
    a=[len(a)]+a
    b=[len(b)]+b
    print(*a)
    print(*b)
    #l[:0]=s
