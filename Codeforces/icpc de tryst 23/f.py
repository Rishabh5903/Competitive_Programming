import sys
input = sys.stdin.readline

    #n,m=map(int,input().split())
n=int(input())
s=str(input())
l=[]
for j in range(n):
    if s[j]=='0':
        l.append(j)
l1=[]
for k in range(l[0]-2):
        # for k in range(l[j]+3,l[j+1]-2):
            if s[k]!='1':
                l1.append(k)
for j in range(len(l)-1):
    if l[j+1]-l[j]>=6:
        for k in range(l[j]+3,l[j+1]-2):
            if s[k]!='1':
                l1.append(k)
for k in range(l[-1]+3,n):
            if s[k]!='1':
                l1.append(k)
cnt=0
for j in range(len(l1)-2):
    if l1[j+1]-l1[j]<=2:
        cnt+=1
    if l1[j+2]-l1[j]<=2:
        cnt+=1
if len(l1)>=2:
    if l1[-1]-l1[-2]<=2:
        cnt+=1
print(l,l1,cnt)
# if len(l1)==0:
#     print(0)
# else:
print(2**(len(l1))-2**cnt+1)
    
    
    #l=list(map(int,input().split()))
    #l[:0]=s
