import sys
import math
input = sys.stdin.readline
n1=int(input())
# for _ in range(n1):
    #n1,n2=map(int,input().split())
    # n1=int(input())
    #s=str(input())
l=list(map(int,input().split()))
tot=sum(l)
prevsum=[0]
rem=[0]
for j in range(n1):
    prevsum.append(prevsum[-1]+l[j])
    rem.append((100*prevsum[-1])%tot)
inc=tot/100
# print(prevsum)
# print(rem)
# print(inc)
for j in range(n1):
    
    temp1=prevsum[j]
    temp2=rem[j]/100
    a=0
    b=math.ceil(rem[j]/100)
    prev=-1
    # print(j,n1,temp2,l[j])
    while b<=l[j]:
       
            # print((100*a)//l[j],(100*b)//l[j],temp2,j,l[j],(100*(temp1+temp2))//tot)
            if int((100*a)//l[j])<=int((100*(temp1+b))//tot)<=int((100*b)//l[j]):
                if int((100*(temp1+b))//tot)!=prev:
                    prev=int((100*(temp1+b))//tot)
                    print(prev)

            a=b
            temp2+=inc
            b=math.ceil(temp2)

            print((100*a)//l[j],(100*b)//l[j],temp2,j,l[j],int((100*(temp1+b))//tot))
            # print(temp2<l[j])
        # print('debug')
        # continue
    

    #l[:0]=s
