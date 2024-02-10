def check_backward(start, end, a, b):
    temp = []
    curr = 0
    next_val = a[end - 1]
    for i in range(start, end):
        index = end - 1 - (i - start)
        if len(temp) > curr:
            next_val = temp[curr]
        else:
            next_val = a[index]
        if a[index] == next_val and len(temp) > curr:
            curr += 1
        if len(temp) > curr:
            next_val = temp[curr]
        else:
            next_val = a[index]
        if next_val != b[index]:
            temp.append(b[index])
    return len(temp) == curr

def check_forward(start, end, a, b):
    temp = []
    curr = 0
    next_val = a[start]
    for i in range(start, end):
        if len(temp) > curr:
            next_val = temp[curr]
        else:
            next_val = a[i]
        if a[i] == next_val and len(temp) > curr:
            curr += 1
        if len(temp) > curr:
            next_val = temp[curr]
        else:
            next_val = a[i]
        if next_val != b[i]:
            temp.append(b[i])
    return len(temp) == curr

def check_any_index(a, b):
    n = len(a)
    if check_backward(0, n, a, b) or check_forward(0, n, a, b):
        return True
    
    for i in range(n + 1):
        left_ok = i == n or check_backward(i, n, a, b)
        right_ok = i == 0 or check_forward(0, i, a, b)
        if left_ok and right_ok:
            return True

    return False

def solve():
    n = int(input())
    a = list(map(int, input().split()))
    b = list(map(int, input().split()))

    if check_any_index(a, b):
        print("YES")
    else:
        print("NO")

if __name__ == "__main__":
    t = int(input())
    for _ in range(t):
        solve()
