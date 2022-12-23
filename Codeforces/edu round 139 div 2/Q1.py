n=int(input())
li=[]
for i in range(n):
    #n1,n2=map(int,input().split())
    n1=int(input())
    #s=str(input())
    #l=list(map(int,input().split()))
    #l[:0]=s
    l=len(str(n1))
    li.append(9*(l-1)+n1//(int('1'+'0'*(l-1))))
for i in li:
    print(i)
