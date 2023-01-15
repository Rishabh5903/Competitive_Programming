import sys
input = sys.stdin.readline
for _ in range(int(input())):
    w,d,h=map(int,input().split())
    a,b,f,g=map(int,input().split())
    print(h+min(b+g+abs(a-f),2*d-b-g+abs(a-f),a+f+abs(b-g),2*w-a-f+abs(b-g)))
    #n1=int(input())
    #s=str(input())
    #l=list(map(int,input().split()))
    #l[:0]=s
