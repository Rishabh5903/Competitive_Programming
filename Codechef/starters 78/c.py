import sys
input = sys.stdin.readline
class Empty(Exception):
    pass
class HeapPriorityQueue():
    #------------------------------ nonpublic behaviors ------------------------------
    def _parent(self, j):
        return (j-1) // 2 #returns the index of parent element of jth element in the heap
    def _left(self, j): 
        return 2*j+1 #returns the index of left element of jth element in the heap
    def _right(self, j):
        return 2*j+2 #returns the index of right element of jth element in the heap
    def _has_left(self, j): #returns whether the jth element has a left element in the heap or not
        return self._left(j) < len(self._data) # if index of left element of jth element is less than the length of list contaning heap elements then left element will exist and returns true otherwise false
    def _has_right(self, j): #returns whether the jth element has a right element in the heap or not
        return self._right(j) < len(self._data)  # if index of right element of jth element is less than the length of list contaning heap elements then right element will exist and returns true otherwise false
    def _swap(self, i, j): #swaps the elements ith and jth index in the heap 
        self._data[i], self._data[j] = self._data[j], self._data[i] #interchanging ith  and jth elements
    def _upheap(self, j): #pushes an element from bottom to suitable position up inside the heap
        parent = self._parent(j) #accessign the parent of jth element
        if j > 0 and self._data[j] < self._data[parent]: #if parent is larger than jth element then jth element needs to be pushed up so we interchange jth element and its parent and recursively upheap it again
            self._swap(j, parent)
            self._upheap(parent) # recur at position of parent
    def _downheap(self, j): #pushes an element from top to suitable position down the heap
        if self._has_left(j): 
            left = self._left(j)
            small_child = left # initally assuming left child is smaller than right
            if self._has_right(j):
                right = self._right(j)
                if self._data[right] < self._data[left]: #then checking the smaller among right and left child assigning the index of smaller value to the small_child variable
                    small_child = right
            if self._data[small_child] < self._data[j]: #if the jth element is greater than small_child(i.e. greater than both children) then we need to push it down so swap j with small_child index
                self._swap(j, small_child)
                self._downheap(small_child) # recur at position of small child
#------------------------------ public behaviors ------------------------------
    def __init__(self,l): 
        self._data=l #initially taking a list l which needs to be converted into a binary heap later
    def __len__(self):
        return len(self._data) #returns lenth of the list containing elements of the binary heap
    def is_empty(self): 
        return len(self) == 0 #returns true if heap is empty
    def enqueue(self,key): #function to insert an element inside the heap
        self._data.append(key)
        self._upheap(len(self._data)-1) #since it was appended at the last index so we upheap the last index of the list
    def min(self): #rerurns the minimum element of the heap without removing it 
        if self.is_empty():
            raise Empty('Priority queue is empty.')
        key = self._data[0] #1st element of the list is the least element 
        return key
    def remove_min(self): #returns the least element as well as removes it from the heap
        if self.is_empty():
            raise Empty('Priority queue is empty.')
        self._swap(0,len(self._data)-1) #swapping the 1st and last element of the list
        item=self._data.pop() #accessing the last element which is the smallest after swapping
        self._downheap(0) #downheaping the 1st element which is the last element after swapping to suitale position so that next smallesst element of the heap comes at top again
        return item #returning the smallest element 
for _ in range(int(input())):
    n,k=map(int,input().split())
    #n=int(input())
    #s=str(input())
    l1=list(map(int,input().split()))
    l2=list(map(int,input().split()))
    lis=[]
    for j in range(n):
        lis.append(l1[j]+l2[j])
    lis.sort()
    ans=0
    
    for j in range(n):
        h=HeapPriorityQueue(lis)
        # h=h1.deep
        val=k-l1[j]
        # h
        temp=0
        prev=0
        flag=False
        while not(h.is_empty()) and val>0:
            # print(val,temp)
            a=h.remove_min()
            if a==l1[j]+l2[j]:
                if not(flag):
                    flag=True
                    continue
            prev=a
            val-=prev
            temp+=1
        if val<0:
            temp-=1
        temp+=1
        ans=max(ans,temp)
    print(ans)
            
    #l[:0]=s
