x=int(input("Enter the staring Number : "))
print("The starting number is : ",x)

y=int(input("Enter the Last Number : "))
print("The End number is : ",y)

for i in range(x,y):
    print(i)
    if(i%2==0):
        print("Even Number : ",i)