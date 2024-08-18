# n=int(input("enter the number of row you want to print : "))
# print("the entered row number : ",n)

# for i in range (1,n):
#     for j in range (1,i):
#         print("",end="i")
#     print("")

rows = int(input("Enter the number of rows: "))  
m = (2*rows)-2

#Outer for loop to handle number of rows  
for i in range(0, rows):  
    #Inner for loop to handle number of columns  
    #values change according to the outer loop  
        for j in range(0, m):  
            print(end=" ")
        #decrementing m after each loop
        m -= 1 
        for j in range(0, i+1):  
            #printing triangle pyramid using asterik
            print("*",end=" ")              
        #End line after each row  
        print()