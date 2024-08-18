from array import*
x=array('i',[])

n=int(input("how many values you want to enter to sort using bubble sort? : "))

for i in range(n):
    print("enter element",i+1,"is:",end=" ")
    x.append(int(input()))

print("array elements are : ",x)

flag=False
for i in range(n-1):
    for j in range(n-i-1):
        if x[j]>x[j+1]:
            x[j],x[j+1]=x[j+1],x[j]
            flag=True

    if flag==False:
        break
    else:
        flag=False

print("sorted Array ",x)