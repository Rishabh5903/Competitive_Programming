def can_fork(a, b, x_king, y_king, x_queen, y_queen):
    # Calculate the relative positions of king and queen
    dx = abs(x_king - x_queen)
    dy = abs(y_king - y_queen)

    # Check the relative positions for fork possibility
    if dx % a == 0 and dy % b == 0:
        steps_x = dx // a
        steps_y = dy // b
        if (steps_x + steps_y) % 2 == 0:
            return True
    return False

def main():
    t = int(input())
    for _ in range(t):
        a, b = map(int, input().split())
        x_king, y_king = map(int, input().split())
        x_queen, y_queen = map(int, input().split())

        if can_fork(a, b, x_king, y_king, x_queen, y_queen):
            print(2)
        else:
            print(0)

if __name__ == "__main__":
    main()
