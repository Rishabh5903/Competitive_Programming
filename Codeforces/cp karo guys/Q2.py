import math
n=int(input())
# li=[]
for i in range(n):
    h,p=map(int,input().split())
    #n1=int(input())
    #s=str(input())
    #l=list(map(int,input().split()))
    # print(int(1+math.log(p,2)))
    k=(pow(2,h)-pow(2,int(1+math.log(p,2))))
    if k>=0:
        if k%p==0:
            # print('debug')
            print(int(1+math.log(p,2))+k//p)
        else:
            print(int(1+math.log(p,2))+k//p+1)
    else:
        print(h)
    #l[:0]=s
# for i in li:
#     print(i)
