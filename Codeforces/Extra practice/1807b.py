for m in range(0,int(input())):
    n = int(input())
    l=list(map(int,input().split()))
    m , b = 0 , 0
    for c in l:
        if c % 2 == 0:
            m += c
        else:
            b += c
    if b>=m:
        print("no")
    else:
        print("yes")