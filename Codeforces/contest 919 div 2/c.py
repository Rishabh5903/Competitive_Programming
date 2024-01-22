import math

def gcd(a, b):
    while b:
        a, b = b, a % b
    return a

def count_points(n, arr):
    result = 0
    for k in range(1, int(math.sqrt(n)) + 1):
        if n % k == 0:
            m_values = set()
            for i in range(n):
                m_values.add(arr[i] % 2)
            if len(m_values) == 1:
                result += 1

            if k * k != n:
                m_values = set()
                for i in range(n):
                    m_values.add(arr[i] % 2)
                if len(m_values) == 1:
                    result += 1

    return result

def main():
    t = int(input())
    for _ in range(t):
        n = int(input())
        arr = list(map(int, input().split()))
        result = count_points(n, arr)
        print(result)

if __name__ == "__main__":
    main()
