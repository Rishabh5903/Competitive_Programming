import sys
input = sys.stdin.readline
for _ in range(int(input())):
    n,m,k=map(int,input().split())
    #n1=int(input())
    #s=str(input())
    l=list(map(int,input().split()))
    
    

    if n%k==0:
        if n//k>=max(l) :
            print('YES')
        else:
            print('NO')
    else:
        temp=n//k+1
        count=0
        for j in range(m):
            if l[j]==temp:
                count+=1
            
        if temp>=max(l) and count<=(n)%k:
            print('YES')
        else:
            print('NO')
    #l[:0]=s
