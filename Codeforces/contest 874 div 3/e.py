import sys
input = sys.stdin.readline
for _ in range(int(input())):
    #n,m=map(int,input().split())
    n=int(input())
    #s=str(input())
    l=list(map(int,input().split()))
    d=[1]*(n+1)
    d[0]=0
    adj=[[] for i in range(n+1)]
    for i in range(n):
        if l[i] not in adj[i+1]:
            adj[i+1].append(l[i]) 
        if i+1 not in adj[l[i]]:
            adj[l[i]].append(i+1)
    c=0
    o=0
    # print(adj)
    for j in range(1,n+1):
        if d[j]:
            if len(adj[j])==1:
                n1=adj[j][0]
                cnt=1
                d[j]=0
                while(d[n1]):
                    
                    if len(adj[n1])==1:
                        cnt+=1
                        d[n1]=0
                    else:
                        if d[adj[n1][0]]!=0:
                            cnt+=1
                            d[n1]=0
                            n1=adj[n1][0]
                        else:
                            cnt+=1
                            d[n1]=0
                            n1=adj[n1][1]
                # print(cnt)
                if cnt==n or len(adj[n1])==2:
                    c+=1
                else:
                    o+=1
            else:
                n1=adj[j][0]
                n2=adj[j][1]
                cnt=1
                d[j]=0
                while(d[n1]):
                    
                    if len(adj[n1])==1:
                        cnt+=1
                        d[n1]=0
                    else:
                        if d[adj[n1][0]]!=0:
                            cnt+=1
                            d[n1]=0
                            n1=adj[n1][0]
                        else:
                            cnt+=1
                            d[n1]=0
                            n1=adj[n1][1]
                while(d[n2]):
                    
                    if len(adj[n2])==1:
                        cnt+=1
                        d[n2]=0
                    else:
                        if d[adj[n2][0]]!=0:
                            cnt+=1
                            d[n2]=0
                            n2=adj[n2][0]
                        else:
                            cnt+=1
                            d[n2]=0
                            n2=adj[n2][1]
                if cnt==n or len(adj[n1])==2:
                    c+=1
                else:
                    o+=1
                # print(o,c)
                # print(d)
    print(c+min(o,1),o+c)


    #l[:0]=s
