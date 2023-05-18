from bisect import bisect_right
import sys
input = sys.stdin.readline
def search(l,x):
    ind=bisect_right(l, x)
    if ind==0:
        return 0
    elif ind==len(l):
        return len(l)-1
    elif l[ind-1]!=x:
        return ind
    else:
        return ind-1
for _ in range(int(input())):
    n,c,q=map(int,input().split())
    #n=int(input())
    s=str(input())
    l=[]
    temp=n
    prev=[]
    ans=[]
    for j in range(c):
        a,b=map(int,input().split())
        l.append((a,b))
        temp+=b-a+1
        prev.append(temp)
    # print(prev)
    for j in range(q):
        k=int(input())
        while k>n:

            ind=search(prev, k)
            # print(ind)
            temp=prev[ind]-k
            k=l[ind][1]-temp
        print(s[k-1])
    # print(*ans)

        
    
    #l=list(map(int,input().split()))
    #l[:0]=s
