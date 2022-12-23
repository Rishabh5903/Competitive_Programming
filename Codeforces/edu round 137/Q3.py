def search(arr, x,o): #for the searching the index of just higher and just lower y coordinate than x(it is also a y coordinate) where o=1 is for jsut higher and o=-1 for just lower using binary search
    if arr[-1][0]<x and o==-1:
        arr[-1][1]=-1
        return len(arr)-1
    elif arr[-1][0]<=x and o==1:
        arr[-1][1]=-1
        return len(arr)-1
    else:
        if o==1: #searching the just higher element
            low = 0
            high = len(arr) - 1
            mid = 0
            while low <= high:

                mid = (high + low) // 2
                if arr[mid][0] <= x: #if mid element is less than x and the previous element is higher than x that means mid is the jsut lower element than x
                    if mid<len(arr)-1 and o==1 and arr[mid][1]==1:
                        if arr[mid+1][0]>x: 
                            # if arr[mid]<x:

                                arr[mid][1]=-1
                                return mid
                            # else:
                            #     return -1
                    low = mid + 1
                elif arr[mid][0] > x:
                    if mid>0 and o==-1:
                        if arr[mid-1].value[0][1]<x:
                            return mid
                    high = mid - 1
            return -1
        else: #searching the just lower element
            low = 0
            high = len(arr) - 1
            mid = 0
            while low <= high:

                mid = (high + low) // 2
                if arr[mid][0] < x: #if mid element is less than x and the previous element is higher than x that means mid is the jsut lower element than x
                    if mid<len(arr)-1 and o==-1 and arr[mid][1]==1:
                        if arr[mid+1][0]>=x: 
                            # if arr[mid]<x:

                                arr[mid][1]=-1
                                return mid
                            # else:
                            #     return -1
                    low = mid + 1
                elif arr[mid][0] >= x:
                    if mid>0 and o==1:
                        if arr[mid-1].value[0][1]<x:
                            return mid
                    high = mid - 1
            return -1
n=int(input())
li=[]
for i in range(n):
    # n1,n2=map(int.input().split())
    n1=int(input())
    s=str(input())
    l=[]
    # print(s)
    l[:0]=s
    l1=list(map(int,input().split()))
    # print(l)
    # print(l1)
    ans=0
    l2=[]
    for j in range(n1) :
        if l[j]=='1':
            l2.append([l1[j],1])
    l2=sorted(l2)
    count=len(l2)
    for j in range(n1):
        if count>0:
            if l[j]=='1':
                if j>=1:
                    if l[j-1]=='0' and l1[j-1]>l1[j]:
                        if search(l2, l1[j-1], 1)!=-1:
                            # print('debug')
                            ans+=l1[j-1]
                            # print(l1[j-1])
                            # print(l1[j],'k')
                            count-=1
                            # print(l1[j-1])
                            l[j]='0'
                    elif l[j-1]=='0' and l1[j-1]<l1[j]:
                        # print(l2)
                        # print(l1[j-1])
                        # print(search(l2, l1[j-1], -1))
                        if search(l2, l1[j-1], -1)!=-1:
                            # print('debug')
                            ans+=l1[j-1]
                            # print(l1[j-1])
                            # print(l1[j],'k')
                            count-=1
                            # print(l1[j-1])
                            l[j]='0'
                        else:
                            if search(l2, l1[j], 1)!=-1:
                                ans+=l1[j]
                                # print(l1[j])
                                # print(l[j],'k')
                                count-=1
                    else:
                        if search(l2, l1[j], 1)!=-1:
                            ans+=l1[j]
                            # print(l1[j])
                            # print(l[j],'k')
                            count-=1
        else:
            break
    li.append(ans)
for i in li:
    print(i)
