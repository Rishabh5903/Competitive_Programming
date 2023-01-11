import sys
input = sys.stdin.readline
for _ in range(int(input())):
    s1,s2=map(str,input().split())
    if s1[-1]=='S':
        if s2[-1]=='L' or s2[-1]=='M':
            print('<')
            continue
        elif s2[-1]=='S':
            if len(s1)<len(s2):
                print('>')
            elif len(s1)>len(s2):
                print('<')
            else:
                print('=')
    elif s1[-1]=='L':
        if s2[-1]=='S' or s2[-1]=='M':
            print('>')
            continue
        elif s2[-1]=='L':
            if len(s1)<len(s2):
                print('<')
            elif len(s1)>len(s2):
                print('>')
            else:
                print('=')
    else:
        if s2[-1]=='L' :
            print('<')
            continue
        elif s2[-1]=='S':

                print('>')
        else:
            print('=')
            # elif len(s1)>len(s2):
            #     print('<')
            # else:
            #     print('=')
    #n1=int(input())
    #s=str(input())
    #l=list(map(int,input().split()))
    #l[:0]=s
