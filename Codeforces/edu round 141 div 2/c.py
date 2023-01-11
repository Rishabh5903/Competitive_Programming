import sys
input = sys.stdin.readline
for _ in range(int(input())):
    n,m=map(int,input().split())
    #n1=int(input())
    #s=str(input())
    l=list(map(int,input().split()))
    l.sort()
    wins=[0]*n
    prevsum=[l[0]]
    for j in range(1,n):
        prevsum.append(l[-1]+l[j])

        if l[j-1]<l[j]:
            wins[j]=j
        else:
            wins[j]=wins[j-1]
    
    #l[:0]=s
