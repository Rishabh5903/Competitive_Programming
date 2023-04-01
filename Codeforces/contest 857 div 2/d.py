import sys
input = sys.stdin.readline
def binarySearch(data, val):
    lo, hi = 0, len(data) - 1
    best_ind = lo
    while lo <= hi:
        mid = lo + (hi - lo) // 2
        if data[mid][0] < val:
            lo = mid + 1
        elif data[mid][0] > val:
            hi = mid - 1
        else:
            best_ind = mid
            break
        # check if data[mid] is closer to val than data[best_ind] 
        if abs(data[mid][0] - val) < abs(data[best_ind][0] - val):
            best_ind = mid
    return best_ind
for _ in range(int(input())):
    #n,m=map(int,input().split())
    n=int(input())
    a=[]
    b=[]
    for j in range(n):
        c,d=map(int,input().split())
        a.append((c,j))
        # b.append((d,j))
        b.append(d)
    a.sort()
    mino=float('inf')
    for j in range(n):
        ind=binarySearch(a,b[j])
        if a[ind][1]==j:
            n1=float('inf')
            n2=float('inf')
            f1=0
            f2=0
            if ind>=1:
                n1=a[ind-1][0]
                f1=1
                # n1=min(n1, abs(a[ind][0]-a[ind-1][0]))
            if ind<=n-2:
                n2=a[ind+1][0]
                f2=1
                # n2=min(n2,, abs(a[]))
            if f1 and f2:
                temp=min(abs(b[j]-n1),abs(b[j]-n2))
            elif f1:
                temp=abs(b[j]-n1)
            else:
                temp=abs(b[j]-n2)
        else:
            temp=abs(b[j]-a[ind][0])   
        mino=min(mino, temp)
    print(mino)
    #s=str(input())
    #l=list(map(int,input().split()))
    #l[:0]=s
