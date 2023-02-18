import sys
input = sys.stdin.readline
for _ in range(int(input())):
    #n1,n2=map(int,input().split())
    n=int(input())
    s=str(n)
    # print(len(s))
    l=len(s)

    if len(s)==1:
        if n%2==0:
            print(n//2,n//2)
        else:
            print(n//2,n//2+1)
    elif int(s[-1])==9 :
        count=1
        var=-1
        for j in range(2,l+1):
            if s[-j]=='9':
                count+=1
            elif int(s[-j])%2==0:
                var=0
                break
            else:
                var=1
                break
        s1=''
        s2=''
        if var==-1:
            for j in range(count):
                if j%2==0:
                    s1+='4'
                    s2+='5'
                else:
                    s1+='5'
                    s2+='4'
        elif var==0:
            s1+=str(int(s[:l-count])//2)
            s2+=str(int(s[:l-count])//2)
            for j in range(count):
                if j%2==0:
                    s1+='4'
                    s2+='5'
                else:
                    s1+='5'
                    s2+='4'
        else:
            s1+=str(int(s[:l-count])//2+1)
            s2+=str(int(s[:l-count])//2)
            for j in range(count):
                if j%2==0:
                    s1+='4'
                    s2+='5'
                else:
                    s1+='5'
                    s2+='4'

        print(int(s1),int(s2))
    else:
        if n%2==0:
            print(n//2,n//2)
        else:
            print(n//2,n//2+1)