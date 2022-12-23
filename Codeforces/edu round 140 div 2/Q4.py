import sys
input = sys.stdin.readline

    #n1,n2=map(int,input().split())
n1=int(input())
s=str(input())
num=2**n1
if not('1' in s):
    print(1)
elif not('0' in s):
    print(num)
else:

    l=[j for j in range(num+1)]
    one=0
    zero=0
    for j in s:
        
        if j=='1':
            one+=1
        elif j=='0':
            zero+=1

    ans=l[2**one:num-2**zero+2]
    print(*ans)
    #l=list(map(int,input().split()))
    #l[:0]=s
