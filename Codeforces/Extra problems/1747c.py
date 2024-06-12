import sys
input = sys.stdin.readline
for _ in range(int(input())):
    #n,m=map(int,input().split())
    n=int(input())
    #s=str(input())
    l=list(map(int,input().split()))
    if l[0]==min(l):
        print('BOB')
    else:
        print('ALICE')
    #l[:0]=s
