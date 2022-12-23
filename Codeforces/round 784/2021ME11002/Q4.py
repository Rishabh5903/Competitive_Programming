def numberofwords(s):
    alphabets=['A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z','a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z']
    ans=0
    for i in range(0,len(s)):


        if i<=len(s)-2 and (s[i] in alphabets) and (not(s[i+1] in alphabets))  :
            ans+=1
    if s[len(s)-1] in alphabets:
        return ans+1

    else:
        return ans
a=int(input())
def numwords(a):


    li=[]
    for i in range(a):
        s=str(input())
        li.append(numberofwords(s))
    li.sort()
    print( li[len(li)-1])

numwords(a)

