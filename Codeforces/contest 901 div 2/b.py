import sys
input = sys.stdin.readline
for _ in range(int(input())):
    n,m,k=map(int,input().split())
    #n=int(input())
    #s=str(input())
    a=list(map(int,input().split()))
    b=list(map(int,input().split()))
    if(k<=50):
        cnt=1
        while(cnt<=k):
            if(cnt%2):
                if(min(a)<max(b)):
                    a[a.index(min(a))],b[b.index(max(b))]=b[b.index(max(b))],a[a.index(min(a))]
            else:
                if(min(b)<max(a)):
                    a[a.index(max(a))],b[b.index(min(b))]=b[b.index(min(b))],a[a.index(max(a))]
            cnt+=1
        print(sum(a))
    else:
        cnt=1
        while(cnt<=50):
            if(cnt%2):
                if(min(a)<max(b)):
                    a[a.index(min(a))],b[b.index(max(b))]=b[b.index(max(b))],a[a.index(min(a))]
            else:
                if(min(b)<max(a)):
                    a[a.index(max(a))],b[b.index(min(b))]=b[b.index(min(b))],a[a.index(max(a))]
            cnt+=1
        if(k%2):
            if(min(a)<max(b)):
                a[a.index(min(a))],b[b.index(max(b))]=b[b.index(max(b))],a[a.index(min(a))]
        print(sum(a))
    #l[:0]=s
