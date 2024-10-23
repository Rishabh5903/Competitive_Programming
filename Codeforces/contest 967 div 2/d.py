def solve():
    n = int(input())
    a = [0] * (n + 1)
    c = [0] * (n + 1)
    p = [-1] * (n + 1)
    v = [False] * (n + 1)
    t = [[] for _ in range(n + 1)]
    
    pMin = int(1e9)
    
    a = [0] + list(map(int, input().split()))
    
    for i in range(1, n + 1):
        p[a[i]] = i
        t[a[i]].append(i)
    
    for i in range(1, n + 1):
        if p[i] != -1:
            c[p[i]] += 1
            pMin = min(pMin, p[i])
    
    r = []
    i = 1
    while i <= n:
        if i == pMin:
            r.append(a[i])
            c[p[a[i]]] -= 1
            while pMin <= n and c[pMin] == 0:
                pMin += 1
            i += 1
        else:
            if len(r) % 2 == 0:
                m = 0
                for j in range(i, min(pMin, n) + 1):
                    if not v[j]:
                        m = max(m, a[j])
                for j in range(i, min(pMin, n) + 1):
                    if a[j] == m:
                        i = j + 1
                        break
                if m == 0:
                    break
                r.append(m)
                c[p[m]] -= 1
                while pMin <= n and c[pMin] == 0:
                    pMin += 1
            else:
                m = int(1e9)
                for j in range(i, min(pMin, n) + 1):
                    if not v[j]:
                        m = min(m, a[j])
                for j in range(i, min(pMin, n) + 1):
                    if a[j] == m:
                        i = j + 1
                        break
                if m == int(1e9):
                    break
                r.append(m)
                c[p[m]] -= 1
                while pMin <= n and c[pMin] == 0:
                    pMin += 1
        
        for idx in t[r[-1]]:
            v[idx] = True
    
    print(len(r))
    print(' '.join(map(str, r)))

if __name__ == "__main__":
    T = int(input())
    for _ in range(T):
        solve()
