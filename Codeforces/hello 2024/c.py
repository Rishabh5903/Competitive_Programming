def longest_non_increasing_subsequence(arr):
    n = len(arr)
    if n == 0:
        return []

    # Length of longest non-increasing subsequence ending at index i
    dp = [1] * n

    # Find longest non-increasing subsequence length at each index
    for i in range(1, n):
        for j in range(i):
            if arr[i] <= arr[j]:
                dp[i] = max(dp[i], dp[j] + 1)

    # Find the length of the longest non-increasing subsequence
    max_length = max(dp)

    # Find the longest non-increasing subsequence
    longest_subseq = []
    for i in range(n - 1, -1, -1):
        if dp[i] == max_length:
            longest_subseq.append(arr[i])
            max_length -= 1

    longest_subseq.reverse()
    return longest_subseq

def exclude_longest_non_increasing_subsequence(arr):
    longest_subseq = longest_non_increasing_subsequence(arr)
    longest_subseq_set = set(longest_subseq)
    result = []

    for element in arr:
        # Exclude elements present in the longest non-increasing subsequence
        if element not in longest_subseq_set:
            result.append(element)

    return result

# Example usage:
array = [8,2,3,1,1,7,4,3]
result = exclude_longest_non_increasing_subsequence(array)
print("Original Array:", array)
print("Subsequence excluding longest non-increasing subsequence:", result)
