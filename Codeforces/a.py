import heapq

def max_experience(t, test_cases):
    for n, k, a, b in test_cases:
        max_exp = []
        total_exp = 0
        curr_exp = 0
        
        for i in range(n):
            curr_exp += a[i]
            heapq.heappush(max_exp, b[i])
            if len(max_exp) > k:
                curr_exp -= heapq.heappop(max_exp)
            total_exp = max(total_exp, curr_exp)
        
        print(total_exp)

# Reading input
t = int(input())
test_cases = []
for _ in range(t):
    n,k=map(int,input().split())
    a = list(map(int, input().split()))
    b = list(map(int, input().split()))
    test_cases.append((n, k, a, b))

max_experience(t, test_cases)
