n, a, b = map(int, input().split())

xor_all = a ^ b
for i in range(n-2):
    k = i+2
    if xor_all % k == 0:
        print("YES")
    else:
        print("NO")