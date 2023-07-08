def solve():
    n, m, h = map(int, input().split())
    p, q = 0, 0
    rank = 1
    
    for _ in range(n):
        cnt = 0
        pen = 0
        v = list(map(int, input().split()))
        temp = [0] * m
        
        v.sort()
        if v[0] <= h:
            cnt += 1
            pen = v[0]
        temp[0] = v[0]
        
        for j in range(1, m):
            v[j] += v[j - 1]
            temp[j] = v[j]
            if temp[j] <= h:
                cnt += 1
                pen = temp[j]
        
        for j in range(1, m):
            temp[j] += v[j - 1]
            if v[j] <= h:
                cnt += 1
                pen = temp[j]
        
        if p == 0:
            p = cnt
            q = pen
        else:
            if cnt > p:
                rank += 1
            elif cnt == p and pen < q:
                rank += 1
    
    print(rank)

t = int(input())

for _ in range(t):
    solve()
