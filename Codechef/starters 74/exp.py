def maxSubArraySum(a):
     
    max_so_far = a[0]
    max_ending_here = 0
     
    for i in range(0, len(a)):
        max_ending_here = max_ending_here + a[i]
        if max_ending_here < 0:
            max_ending_here = 0
         
        # Do not compare for all elements. Compare only  
        # when  max_ending_here > 0
        elif (max_so_far < max_ending_here):
            max_so_far = max_ending_here
             
    return max_so_far
l=[64,-23,72,-5724,-75,24,-2,8]
print(maxSubArraySum(l))