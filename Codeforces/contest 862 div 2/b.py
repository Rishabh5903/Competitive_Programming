import sys
input = sys.stdin.readline
for p in range(int(input())):
    #n,m=map(int,input().split())
    t=int(input())
    st=str(input())
    answer=[]
    index=0
    mi=st[0]
    flag=0
    for j in range(2,t+2):
        
        if st[-j]<=st[0] and not(flag):
            # answer.append(s[-j])
            mi=st[-j]
            flag=1
            index=t-j+1
        if flag:
            # print(s[-j],mi,s[-j]<mi)
            if st[-j]<mi:
                mi=st[-j]
                index=t-j+1
        # print(mi,index)
    answer.append(mi)
    for j in range(t):
        if not(j==index):
            answer.append(st[j])
    # print(answer)
    print(''.join(answer))
    #l=list(map(int,input().split()))
    #l[:0]=s
