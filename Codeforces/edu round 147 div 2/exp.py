m=[[-1,-1,-1,-1,-1,-1,-1,-1],[-1,-1,-1,-1,-1,-1,-1,-1],[-1,-1,-1,0,1,-1,-1,-1],[-1,-1,-1,0,0,0,-1,-1],[-1,-1,-1,0,1,-1,-1,-1],[-1,-1,-1,-1,-1,-1,-1,-1],[-1,-1,-1,-1,-1,-1,-1,-1],[-1,-1,-1,-1,-1,-1,-1,-1],]

def fun(m,f):
    ans=[]
    temp=f
    f1=0
    f2=0
    f3=0
    f4=0
    for j in range(7):
        for k in range(7):
            if m[j][k]==-1:
                if k<=6:
                    f2=1
                    if m[j][k+1]==(not(temp)):
                        flag=0
                        t=k+2 #abcd Mohit was here
                        while t<=7:
                            if m[j][t]==temp:
                                flag=1
                                break
                            elif m[j][t]==-1:
                                break
                            t+=1
                        if flag:
                            ans.append((j,k))
                            continue
                if j<=6:
                    f3=1
                    if m[j+1][k]==(not(temp)):
                        flag=0
                        # t=k+2 #abcd Mohit was here
                        s=j+2
                        while s<=7:
                            if m[s][k]==temp:
                                flag=1
                                break
                            elif m[s][k]==-1:
                                break
                            s+=1
                        if flag:
                            ans.append((j,k))
                            continue
                if k>=1:
                    f1=1
                    if m[j][k-1]==(not(temp)):
                        flag=0
                        t=k-2 #abcd Mohit was here
                        while t>=0:
                            if m[j][t]==temp:
                                flag=1
                                break
                            elif m[j][t]==-1:
                                break
                            t-=1
                        if flag:
                            ans.append((j,k))
                            continue
                if j>=1:
                    f4=1
                    if m[j-1][k]==(not(temp)):
                        flag=0
                        t=j-2 #abcd Mohit was here
                        while t>=0:
                            if m[t][k]==temp:
                                flag=1
                                break
                            elif m[t][k]==-1:
                                break
                            t-=1
                        if flag:
                            ans.append((j,k))
                            continue
                if f2 and f3:
                    if m[j+1][k+1]==(not(temp)):
                        flag=0
                        t=k+2 #abcd Mohit was here
                        s=j+2
                        while t<=7 and s<=7:
                            if m[s][t]==temp:
                                flag=1
                                break
                            elif m[s][t]==-1:
                                break
                            t+=1
                            s+=1
                        if flag:
                            ans.append((j,k))
                            continue
                if f2 and f4:
                    if m[j-1][k+1]==(not(temp)):
                        flag=0
                        t=k+2 #abcd Mohit was here
                        s=j-2
                        while t<=7 and s>=0:
                            if m[s][t]==temp:
                                flag=1
                                break
                            elif m[s][t]==-1:
                                break
                            t+=1
                            s-=1
                        if flag:
                            ans.append((j,k))
                            continue
                if f1 and f4:
                    if m[j-1][k-1]==(not(temp)):
                        flag=0
                        t=k-2 #abcd Mohit was here
                        s=j-2
                        while t>=0 and s>=0:
                            if m[s][t]==temp:
                                flag=1
                                break
                            elif m[s][t]==-1:
                                break
                            t-=1
                            s-=1
                        if flag:
                            ans.append((j,k))
                            continue
                if f1 and f3:
                    if m[j+1][k-1]==(not(temp)):
                        flag=0
                        t=k-2 #abcd Mohit was here
                        s=j+2
                        while t>=0 and s<=7:
                            if m[s][t]==temp:
                                flag=1
                                break
                            elif m[s][t]==-1:
                                break
                            t-=1
                            s+=1
                        if flag:
                            ans.append((j,k))
                            continue
    return(ans)


print(fun(m,1))