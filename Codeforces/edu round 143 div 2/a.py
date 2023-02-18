import sys
input = sys.stdin.readline
for _ in range(int(input())):
    n,m=map(int,input().split())
    #n=int(input())
    s1=str(input())
    s2=str(input())
    c=0
    l1=[]
    l2=[]
    #l=list(map(int,input().split()))
    l1[:0]=s1
    l2[:0]=s2
    l1.pop()
    l2.pop()
    l2.reverse()
    l=l1+l2
    # print(l)
    for j in range(n+m-1):
        if l[j+1]==l[j]:
            c+=1
    if c>=2:
        print('NO')
    else:
        print('YES')
