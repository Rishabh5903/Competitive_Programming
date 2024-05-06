def maxm(v):
    v.sort()
    return v[-1]

def minm(v):
    v.sort()
    return v[0]

def solve():
    n = int(input())
    l=list(map(str,input().split()))

    v1, v2 = [], []
    mp = {}
    for i in range(n):
        temp = l[i]
        n1, n2 = 0, 0
        v1_i, v2_i = [], []
        for j in range(len(temp)):
            n1 += int(temp[j])
            n2 += int(temp[len(temp) - j - 1])
            v1_i.append(n1)
            v2_i.append(n2)
        v1.append(v1_i)
        v2.append(v2_i)
        mp[(n1, len(temp))] = mp.get((n1, len(temp)), 0) + 1

    ans = 0
    for i in range(n):
        length = len(v1[i])
        for j in range(length):
            ans += mp.get((2 * v1[i][j] - v1[i][length - 1], 2 * (j + 1) - length), 0)
            ans += mp.get((2 * v2[i][j] - v2[i][length - 1], 2 * (j + 1) - length), 0)
        ans -= mp.get((2 * v1[i][length - 1] - v1[i][length - 1], length), 0)

    print(ans)

if __name__ == "__main__":
    n = 1
    for t in range(1, n + 1):
        solve()
