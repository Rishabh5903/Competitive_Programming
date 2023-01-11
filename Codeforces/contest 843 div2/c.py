import sys
input = sys.stdin.readline
for _ in range(int(input())):
    n1,n2=map(int,input().split())
    if n1==n2:
        print(n1)
        continue
    a=bin(n1)
    b=bin(n2)
    if len(a)<len(b):
        print(-1)
    
    else:
        a=a[2:]
        b=b[2:]
        b='0'*(len(a)-len(b))+b
        # print(a,b,len(a))
        for j in range(len(a)):
            if a[j]=='0' and b[j]=='1':
                print(-1)
                break
            elif a[j]=='1' and b[j]=='0':
                if '1' in b[j+1:]:
                    print(-1)
                    break
                else:
                    if j==0:
                        print(2**(len(a)))
                        break
                    elif j==1:
                        print(-1)
                        break
                    elif j>=1:
                        if a[j-1]=='1':
                            print(-1)
                            break

                    ans=0
                    for k in range(j-1):
                        if a[k]=='1':
                            ans+=2**(len(a)-k-1)
                    ans+=2**(len(a)-j)
                    print(ans)
                    break


    #n1=int(input())
    #s=str(input())
    #l=list(map(int,input().split()))
    #l[:0]=s
