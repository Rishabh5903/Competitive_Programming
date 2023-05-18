import sys
input = sys.stdin.readline
from sys import stdout
for _ in range(int(input())):
    n,m=map(int,input().split())
    # stdout.flush()
    if n==m:
        # for j in range(3):
            print('?',1,1)
            stdout.flush()
            o1=int(input())
            print('?',1+o1,1+o1)
            stdout.flush()
            o2=int(input())
            print('?',1+o1,1+o1-o2)
            stdout.flush()
            o3=int(input())
            if o3==0:
                print('!',1+o1,1+o1-o2)
                stdout.flush()
            else:
                print('!',1+o1-o2,1+o1)
                stdout.flush()
    elif n>m:
            print('?',1,1)
            stdout.flush()
            o1=int(input())
            if o1>m-1:
                print('?',1+o1,m)
                stdout.flush()
                o2=int(input())
                print('!',1+o1,m-o2)
                stdout.flush()
            else:
                print('?',1+o1,1+o1)
                stdout.flush()
                o2=int(input())
                print('?',1+o1,1+o1-o2)
                stdout.flush()
                o3=int(input())
                if o3==0:
                    print('!',1+o1,1+o1-o2)
                    stdout.flush()
                else:
                    print('!',1+o1-o2,1+o1)
                    stdout.flush()
    elif m>n:
            print('?',1,1)
            stdout.flush()
            o1=int(input())
            if o1>n-1:
                print('?',n,1+o1)
                stdout.flush()
                o2=int(input())
                print('!',n-o2,1+o1)
                stdout.flush()
            else:
                print('?',1+o1,1+o1)
                stdout.flush()
                o2=int(input())
                print('?',1+o1,1+o1-o2)
                stdout.flush()
                o3=int(input())
                if o3==0:
                    print('!',1+o1,1+o1-o2)
                    stdout.flush()
                else:
                    print('!',1+o1-o2,1+o1)
                    stdout.flush()
    
    #s=str(input())
    #l=list(map(int,input().split()))
    #l[:0]=s
