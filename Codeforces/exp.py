def find_transform_position(n, k, s):
    # Check from the end for a continuous sequence of 0's or 1's of length k
    for i in range(n-k, -1, -1):
        if s[i:i+k] in ['0'*k, '1'*k]:
            # Calculate p as k minus the remaining length after i+k
            # print(i)
            p = i
            # print(p)
            # Perform the operation and check if the string becomes k-proper
            transformed = s[p:] + s[:p][::-1]
            # print(transformed)
            # transformed = transformed[::-1]
            # print(transformed)
            # transformed = transformed[k:] + transformed[:k][::-1]
            # print(transformed)
            f=1 
            for i in range(n-k):
                if(transformed[i]==transformed[i+k]):
                    f=0
                    break
            if(f):
                return p
    return -1

# Example usage:
t = int(input().strip())
for _ in range(t):
    n, k = map(int, input().strip().split())
    s = input().strip()
    print(find_transform_position(n, k, s))
