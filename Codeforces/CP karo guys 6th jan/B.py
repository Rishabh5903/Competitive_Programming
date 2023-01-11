import sys
input = sys.stdin.readline
for _ in range(int(input())):
    #n1,n2=map(int,input().split())
    n1=int(input())
    #s=str(input())
    l=list(map(int,input().split()))
    tot=sum(l)
    xor=l[0]
    for j in range(1,n1):
        xor=xor^l[j]
    print(2)
    print(xor,xor+tot)
    #l[:0]=s
