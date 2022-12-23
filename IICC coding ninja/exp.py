def quick_sort(s,t):
    if len(s) == 1 or len(s) == 0:
       return (s,t)
    else:
        pivot = s[0]
        i = 0
        for j in range(len(s)-1):
            if s[j+1] < pivot:
               s[j+1],s[i+1] = s[i+1],s[j+1]
               t[j+1],t[i+1] = t[i+1],t[j+1]
               i += 1
        s[0],s[i] = s[i],s[0]
        t[0],t[i] = t[i],t[0]
        first_part = quick_sort(s[:i],t[:i])
        second_part = quick_sort(s[i+1:],t[i+1:])
        first_part[0].append(s[i])
        first_part[1].append(t[i])
        return [first_part[0]+second_part[0], first_part[1]+ second_part[1]]
def beautyContest(k, a, b) :

    count=0

    l=quick_sort(b,a)
    print(l[0],l[1])
    for i in range(0,len(a)-2):
        for j in range(i+1,len(a)-1):
            while count<k:
                if l[1][i]+l[1][j]>l[0][i]+l[0][j]:
                    count+=1

                else:
                    continue
    if count>=k:
        return 1
    else:
        return 0
print(beautyContest(2,[1,2,2],[2,1,1]))