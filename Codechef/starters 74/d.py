import sys
input = sys.stdin.readline
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
for _ in range(int(input())):
    #n1,n2=map(int,input().split())
    n=int(input())
    #s=str(input())
    l1=list(map(int,input().split()))
    l=[]
    for j in range(n):
        l.append((l1[j],j))
    l.sort()
    arr=[0]*n
    temp=[l[0][1]]
    j=0
    while j<(n-1):
        if l[j+1][0]==l[j][0]:
            temp.append(l[j+1][1])
            if l[j+1][1]>l[j][1] and l[j+1][1]!=l[j][1]+1:
                arr[l[j][1]]-=1
            j+=1
            # elif l[j+1][1]<l[j][1]:
            #     arr[l[j+1][1]]-=1
            # if l[j+1][1]==l[j][1]+1:
            #     arr[l[j][1]]+=1
        elif l[j+1][0]==l[j][0]+1:


            if l[j+1][1]<l[j][1]:
                p=j+1
                while p<=n-1 and l[p][1]<l[j][1] and l[p][0]==l[j][0]+1:
                    for k in temp:
                        arr[k]+=1
                    p+=1
                j=p
                if j<=n-1:
                    temp=[l[j][1]]
            else:
                j+=1
                continue
        else:
            temp=[l[j+1][1]]
            j+=1
    # print(arr)
    print(maxSubArraySum(arr))

    #l[:0]=s
