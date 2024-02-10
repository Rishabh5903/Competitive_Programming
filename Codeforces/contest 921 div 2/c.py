from sys import stdin, stdout
input = stdin.readline
from bisect import bisect, bisect_right, bisect_left
from math import inf, ceil, log2, gcd, lcm, sqrt, log
from heapq import heapify, heappop, heappush
from collections import Counter, deque
for _ in range(int(input())):
    n, k, m = map(int, input().split())
    s = input()

    chk = [0] * k
    cnt = 0
    temp=[]
    for i in range(m):
        if ord(s[i]) - ord('a') < k:
            
            chk[ord(s[i]) - ord('a')] = 1
        if all(chk):
            temp.append(s[i])
            chk = [0] * k
            cnt += 1
        if cnt == n:
            break

    if cnt >= n:
        print("YES")
    else:
        print("NO")
        ans = ""
        ind = 0
        for i in range(k):
            if chk[i] == 0:
                ind = i
                break
        c = chr(97 + ind)
        ans = "".join(temp)
        ans+=c*(n-len(ans))
        print(ans)

