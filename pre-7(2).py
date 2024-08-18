n=int(input("enter the number of row you want to print : "))
print("the entered row number : ",n)

for i in range (1,n):
    for j in range (1,i):
        print(j,end="")
    print("")