t = int(input())

for _ in range(t):
    a, b = map(int, input().split())

    # initialize starting position and leg length
    x, y, m = 0, 0, 1
    ans = abs(a-x) + abs(b-y)  # number of moves to reach (a,b) with current leg length

    while m <= ans:
        # check if we can make a jump that takes us past the target cell
        if abs(a-x) % m == 0 and abs(a-x) // m <= ans - 1:
            x2 = a
            y2 = y + ((b-y)//m)*m  # jump as far as possible in the y-direction
            ans2 = abs(a-x2) + abs(b-y2) + (m-1)
            ans = min(ans, ans2)
        else:
            # try all possible jumps with the current leg length
            x2, y2 = x+m, y
            ans2 = abs(a-x2) + abs(b-y2) + (m-1)
            if ans2 < ans:
                ans = ans2
            x2, y2 = x, y+m
            ans2 = abs(a-x2) + abs(b-y2) + (m-1)
            if ans2 < ans:
                ans = ans2

            # increase the leg length and try again
            m += 1

    print(ans)
