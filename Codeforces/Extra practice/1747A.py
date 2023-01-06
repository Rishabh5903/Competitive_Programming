import sys
input = sys.stdin.readline
for _ in range(int(input())):
    #n1,n2=map(int,input().split())
    n1=int(input())
    #s=str(input())
    l=list(map(int,input().split()))
    a=0
    b=0
    for j in l:
        if j>0:
            b+=j
        else:
            a+=j
    print(max(abs(a),abs(b))-min(abs(a),abs(b)))
    #l[:0]=s
