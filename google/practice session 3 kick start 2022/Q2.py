#Declaration: I have used the linkedstack class from the reference book 'Data structures an algorithm in python' by Roberto tamassia and it was also given in the class slides of linked list topic whereas I have commented it's working as per my own understanding
class Empty(Exception):
    pass
class LinkedStack:
    class _Node: #non public class for storing a singly linked node
        __slots__=['_element', '_next'] 
        def __init__(self,element,next):
            self._element=element # referencing the user's element
            self._next=next # referencing the user's next node
    def __init__(self): #initilasing an empty stack
        self._head=None  #referncing to the head node
        self._size=0 # #initilasing the size of stack to zero
    def __len__(self): #function to find length of stack
        return self._size #returns the size of the stacks which keeps on updating after push and pop
    def is_empty(self): #returns whether the stack is empty or not
        return self._size==0 #returns true if size of stack is zero else false
    def top(self): #returns top element of the stack
        if self.is_empty(): #raises error if the stack is empty
            raise Empty('Stack is Empty')
        return self._head._element #returns the head element 
    def push(self,e): #pushes the element e to the stack
        self._head = self._Node(e,self._head) # updates the head of the stack by creating another element storing value of e and next value as the intial head
        self._size+=1 #incrementing the size of stack
    def pop(self): #removes the top element from the stack
        if self.is_empty(): #raises error if the stack is empty
            raise Empty('Stack is Empty')
        answer=self._head._element #head element value stored before updating
        self._head=self._head._next #updating the head as the next element of head
        self._size-=1 #decreasing the size of stack
        return answer #rerurning the stored value of answer
    def __str__(self): #returns the stack in string format
        arr='' #initialising the array as an empty string
        start=self._head #starting with the head element
        for i in range(self._size):
            arr+=str(start._element)+', ' #adding the value of element at the variable start and , to the string 
            start=start._next #updating the start variable to the next element of the list
        return '<' +arr+']' #retuning the string with applying brackets 
n=int(input())
li=[]
for i in range(n):
    n1=int(input())
    l=list(map(int,input().split()))
    ans=0
    s=LinkedStack()

    flag=True
    for j in range(1,l.index(max(l))):
        if not max(l)>l[j]:
                flag=False
        if s.is_empty():
            if l[j]>l[j-1]:
                continue
            else:
                ans+=1
                s.push(l[j-1])
                continue
        else:
            if l[j]<l[j-1] and l[j-1]>s.top():
                ans+=1
                s.push(l[j-1])
                continue
    if flag:
        if l.index(max(l))==len(l)-1:
            ans+=1
        elif l[l.index(max(l))+1]<max(l):
            ans+=1
    if (l.index(max(l))==0 or l.index(max(l))==1) and (l[l.index(max(l))+1]>max(l)):
        ans+=1
    li.append(ans)





for i in range(len(li)):
    print("Case #", i+1, ": ", li[i], sep="")
