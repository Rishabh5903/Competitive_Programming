# initializing the list
random_list = ['A', 'A', 'B', 'C', 'B', 'D', 'D', 'A', 'B']
frequency = {}

# iterating over the list
for item in random_list:
   # checking the element in dictionary
   if item in frequency:
      # incrementing the counr
      frequency[item] += 1
   else:
      # initializing the count
      frequency[item] = 1

# printing the frequency
print(frequency)
n1=0
n2=0

for i in frequency:
    if frequency[i]%2==0:
        n2+=1
    else:
        n1+=1
print(n1)
print(n2)

