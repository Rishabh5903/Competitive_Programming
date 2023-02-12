import sys
input = sys.stdin.readline
for _ in range(int(input())):
    #n1,n2=map(int,input().split())
    n=int(input())
    s=str(n)
    if len(s)==1:
        if n%2==0:
            print(n//2,n//2)
        else:
            print(n//2,n//2+1)
        continue
 
 
    else:
        # num=((int(s[1:])-int(s[0]))//2+1)
        # if int(str(num)[-1])>5:
        if len(s)==2 and (int(s[-1])<int(s[0])):
            if n%2==0:
                print(n//2,n//2)
            else:
                print(n//2,n//2+1)
            continue
        s2=max(int(s[1:])-((int(s[1:])-int(s[0]))//2+1),((int(s[1:])-int(s[0]))//2+1))
        s1=int(s[0]+str(min(int(s[1:])-((int(s[1:])-int(s[0]))//2+1),((int(s[1:])-int(s[0]))//2+1))))
        # else:
        #     s2=((int(s[1:])-int(s[0]))//2+1)
        #     s1=int(s[0]+str(int(s[1:])-s2))
        print(s1,s2)
    
    #s=str(input())
    #l=list(map(int,input().split()))
    #l[:0]=s