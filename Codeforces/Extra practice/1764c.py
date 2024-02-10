import sys
input = sys.stdin.readline
for _ in range(int(input())):

    #s=str(input())
    
    #l[:0]=s
    n = int(input())
    l=list(map(int,input().split()))
    # s = input()
    l.sort()

    if l[0] == l[-1]:
        print(n // 2)
        continue
    
    i = 0; j = n - 1
    while i < j and l[i] != l[j]:
        i += 1
        j -= 1
    
    left = n - i
    ans = i * left
    print(ans)
 
