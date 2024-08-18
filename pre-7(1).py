n=int(input("enter the number of row you want to print : "))
print("the entered row number : ",n)

for i in range (0,n):
    for j in range (0,i):
        print("*",end="")
    print("")