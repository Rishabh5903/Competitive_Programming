import sys
input = sys.stdin.readline
for _ in range(int(input())):
  n = int(input())
  a = list(map(int, input().split()))
  f = [[1] * 2 for i in range(n)]
  ans = 1
  for i in range(1, n):
    for j in range(2):
      for k in range(2):
        diff = (a[i] + j) - (a[i - 1] + k)
        if 0 <= diff <= 1:
          f[i][j] = max(f[i][j], f[i - 1][k] + diff)
      ans = max(ans, f[i][j])
  print(ans)