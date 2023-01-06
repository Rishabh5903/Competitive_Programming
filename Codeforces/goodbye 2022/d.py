import sys
input = sys.stdin.readline
for _ in range(int(input())):
    n,m=map(int,input().split())
    #n1=int(input())
    #s=str(input())
    l1=list(map(int,input().split()))
    l2=list(map(int,input().split()))
    temp=l1+l2[0:m-1]
    temp.sort()


    print(sum(temp[m:])+l2[-1])