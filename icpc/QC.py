# import math

# n=int(input())
# li=[]
# for i in range(n):
#     N,X=map(int,input().split())
#     ans=0
#     count=0

#     s=str(input())
#     for j in range(len(s)):

#         if s[j]=='1':
#             ans+=1
#             if count!=0:
#                 ans+=count
#                 X-=2*(count)+1
#                 count=0
#             continue
#         else:

#             count+=1
#             if 2*count+1<=X:
#                 continue
#             else:
#                 ans+=count-1
#                 X-=2*(count-1)+1
#                 count=0
#                 continue
#     if count==0:
#         li.append(ans)
#     else:
#         li.append(ans+count)           

# for i in li:
#     print(i)
import math
n=int(input())
li=[]
for i in range(n):
    N,X=map(int,input().split())
    s=str(input())
    ans=0
    count=0
    for j in range(N-1):
        if s[j]=='1':
            ans+=1
            continue
        if s[j]=='0':

            if s[j+1]=='0' and 2*(count+1)+1<=X:
                count+=1
                continue
            elif s[j+1]=='0' and 2*(count+1)+1>X:
                count+=1
                ans+=count
                count=0
                X-=2*(count)+1
            elif s[j+1]=='1':
                count+=1
                ans+=count
                count=0
                X-=2*(count)+1
    if s[-1]=='1':
        ans+=1
    else:

        if X>=2*(count+1)+1:
            ans+=count

    li.append(ans)

for i in li:
    print(i)
