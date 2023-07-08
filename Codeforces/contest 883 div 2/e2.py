import sys
input = sys.stdin.readline

def is_snowflake(n):
    if n < 7:
        return False
    
    # Perform binary search to find the value of k
    left, right = 2, n // 3
    while left <= right:
        mid = (left + right) // 2
        sum_k = (pow(2, mid + 1) - 1) // (2 - 1)  # Sum of geometric series
        if sum_k == n:
            return True
        elif sum_k < n:
            left = mid + 1
        else:
            right = mid - 1
    
    return False

for _ in range(int(input())):
    n = int(input())
    if is_snowflake(n):
        print("YES")
    else:
        print("NO")
