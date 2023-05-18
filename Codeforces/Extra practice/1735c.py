import sys
input = sys.stdin.readline
for _ in range(int(input())):
    #n,m=map(int,input().split())
    n=int(input())
    s=str(input())
    l=[]
    d={}
    for j in range(n):
        if not(s[j] in d):
            d[s[j]]=1
            l.append(s[j])
    # l.sort()
    s2=''.join(l)
    d={}
    a=['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z','a','b']
    ind=0
    rem=[]
    remi=0
    for j in range(len(s2)):

        if a[ind]==s2[j]:
            if remi==len(rem):
                d[s2[j]]=a[ind+1]
                rem.append(a[ind])
                ind+=2
            else:
                d[s2[j]]=rem[remi]
                remi+=1
        else:
            if remi==len(rem):
                if a[ind] in d:
                    if d[a[ind]]==s2[j]:
                        d[s2[j]]=a[ind+1]
                        rem.append(a[ind])
                        ind+=2
                    else:
                        d[s2[j]]=a[ind]
                        ind+=1
                else:

                    d[s2[j]]=a[ind]
                    ind+=1
            else:
                # f=0
                # while remi<len(rem):
                # if remi<len(rem):
                    if rem[remi] in d:
                        if d[rem[remi]]==s2[j]:
                            if remi+1<len(rem):
                                d[s2[j]]=rem[remi+1]
                                rem[remi+1]=rem[remi]
                                remi+=1
                            else:
                                if a[ind] in d:
                                    if d[a[ind]]==s2[j]:
                                        d[s2[j]]=a[ind+1]
                                        rem.append(a[ind])
                                        ind+=2
                                    else:
                                        d[s2[j]]=a[ind]
                                        ind+=1
                                else:

                                    d[s2[j]]=a[ind]
                                    ind+=1
                        else:
                            d[s2[j]]=rem[remi]
                            remi+=1
                    else:
                        d[s2[j]]=rem[remi]
                        # f=1
                        remi+=1
                        # break
                # if not(f):


    ans=[]
    for j in range(n):
        ans.append(d[s[j]])
    print(''.join(ans))
        
    #l=list(map(int,input().split()))
    #l[:0]=s
