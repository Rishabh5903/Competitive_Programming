n=int(input())
li=[]
from string import ascii_lowercase
LETTERS = {letter: str(index) for index, letter in enumerate(ascii_lowercase, start=1)} 

def alphabet_position(text):
    text = text.lower()
    numbers = [LETTERS[character] for character in text if character in LETTERS]
    return ' '.join(numbers)  
for i in range(n):
    l=str(input())
    (n1,n2)=(alphabet_position(l[0]),alphabet_position(l[1]))
    if l[0]<l[1]:
        li.append(25*(int(n1)-1)+int(n2)-1)
    else:
        li.append(25*(int(n1)-1)+int(n2))
for i in li:
    print(i)

def remove_space(s):
    ans=''
    for i in range(0,len(s)):
        if s[i]!=' ':
            ans+=s[i]
        elif s[i]==' ' and s[i+1]==' ' :
            continue
        elif s[i]==' ' and s[i+1]!=' ':
            ans+=s[i]
            ans+=s[i+1]
    return ans
def remove_commas(s):
    ans=''
    for i in range(0,len(s)):
        if s[i]!=',':
            ans+=s[i]
        elif s[i]==',' and s[i+1]==',' :
            continue
        elif s[i]==',' and s[i+1]!=',':
            ans+=s[i]
            ans+=s[i+1]
    return ans 

print(remove_commas('tbherh5,,,,,hbr5  ,,,  rryjby, tyjrr  ,,,,,   hrbrby'))  
print()