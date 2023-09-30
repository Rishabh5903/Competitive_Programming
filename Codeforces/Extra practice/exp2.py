K = int(input())
M = 10

l = []
for mask in range(1 << M):
    s = ""
    for i in range(M - 1, -1, -1):
        if mask & (1 << i):
            s += chr(ord("0") + i)
    if s != "" and int(s) > 0:
        l.append(int(s))
# l.sort()
print(l)
print(l[K - 1])