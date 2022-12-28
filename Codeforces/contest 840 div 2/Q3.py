import sys
input = sys.stdin.readline
for _ in range(int(input())):
    #n1,n2=map(int,input().split())
    n1=int(input())
    #s=str(input())
    l=list(map(int,input().split()))
    if n1==2:
        print(max(l[0]+l[1],2*abs(l[0]-l[1])))
    elif n1==3:
        if l[0]==max(l) or l[-1]==max(l):
            print(3*max(l))
        elif l[1]==max(l):
            a=l[0]
            b=l[1]
            c=l[2]
            print(max(3*abs(a-b),3*abs(b-c),a+b+c,3*a,3*c))
    else:
        print(n1*max(l))
    #l[:0]=s
