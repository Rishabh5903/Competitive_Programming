import sys
input = sys.stdin.readline
for _ in range(int(input())):
    #n,m=map(int,input().split())
    n=int(input())
    a1,a2,b1,b2=0,0,0,0
    # i=2
    a1+=1
    n-=1
    for i in range(2,1500):
        if n<=0:
            break
        if n>=i:
            if (i//2)%2==1:
                b1+=i//2
                b2+=i-i//2
            elif (i//2)%2==0:
                
                a2+=i//2
                a1+=i-i//2
            n-=i
            i+=1
            
        else:
            if (i//2)%2==1:
                b1+=n//2
                b2+=n-n//2
            elif (i//2)%2==0:
                
                a2+=n//2
                a1+=n-n//2
            break
    print(a1+a2,b1+b2)


        


    #s=str(input())
    #l=list(map(int,input().split()))
    #l[:0]=s
