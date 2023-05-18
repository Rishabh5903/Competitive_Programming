import sys
input = sys.stdin.readline
def getClosest(arr, n, target):
 
    # Corner cases
    if (target <= arr[0]):
        return arr[0]
    if (target >= arr[n - 1]):
        return arr[n - 1]
 
    # Doing binary search
    i = 0; j = n; mid = 0
    while (i < j):
        mid = (i + j) // 2
 
        if (arr[mid] == target):
            return arr[mid]
 
        # If target is less than array
        # element, then search in left
        if (target < arr[mid]) :
 
            # If target is greater than previous
            # to mid, return closest of two
            if (mid > 0 and target > arr[mid - 1]):
                return findClosest(arr[mid - 1], arr[mid], target)
 
            # Repeat for left half
            j = mid
         
        # If target is greater than mid
        else :
            if (mid < n - 1 and target < arr[mid + 1]):
                return findClosest(arr[mid], arr[mid + 1], target)
                 
            # update i
            i = mid + 1
         
    # Only single element left after search
    return arr[mid]
def findClosest(val1, val2, target):
 
    if (target - val1 >= val2 - target):
        return val2
    else:
        return val1
for p in range(int(input())):
    n,m=map(int,input().split())
    lis=[]
    
    for i in range(n):
        t=int(input())
        lis.append(t)
    lis.sort()
    for i in range(m):
        a,b,c=map(int,input().split())
        if a*c<=0:
            print('No')
        else:
            t=getClosest(lis, n, b)
            if (b-t)**2-4*a*c<0:
                print('Yes')
                print(t)
            else:
                print('No')
    print('')

