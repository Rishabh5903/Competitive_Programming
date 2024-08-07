def earliest_time_all_lights_on(t, cases):
    results = []
    
    for case in cases:
        n, k = case[0], case[1]
        a = case[2]
        
        max_a = max(a)
        found = False
        
        # Check possible times from max_a to max_a + k - 1
        for t in range(max_a, max_a + k):
            if all(((t - ai) // k) % 2 == 0 for ai in a):
                results.append(t)
                found = True
                break
        
        if not found:
            results.append(-1)
    
    return results

# Reading input
import sys
input = sys.stdin.read
data = input().split()

t = int(data[0])
index = 1
cases = []

for _ in range(t):
    n = int(data[index])
    k = int(data[index + 1])
    a = list(map(int, data[index + 2 : index + 2 + n]))
    cases.append((n, k, a))
    index += 2 + n

# Get results
results = earliest_time_all_lights_on(t, cases)

# Print results
for result in results:
    print(result)
