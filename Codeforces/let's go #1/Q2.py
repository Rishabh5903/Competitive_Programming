import string
# n=int(input())
# li=[]
# for i in range(n):
#     n1,n2=map(int,input().split())
#     n1=int(input())
#     s=str(input())
#     l=list(map(int,input().split()))
#     l[:0]=s
# for i in li:
#     print(i)
s1=str(input())
l1=[]
l1[:0]=s1
s2=str(input())
l2=[]
l2[:0]=s2
flag=True
for j in range(len(s1)):
    if not(l1[j].isupper()):
        l1[j]=l1[j].upper()
    if not(l2[j].isupper()):
        l2[j]=l2[j].upper()
if l1<l2:
    print(-1)
elif l1>l2:
    print(1)
else:
    print(0)
