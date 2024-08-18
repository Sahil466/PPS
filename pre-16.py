array = [1,2,3,4,5,6,7,8,9]

print(array)

s=int(input("enter the element you want to search : "))

try:
    p=array.index(s)
    print(f"element {s} is found at index {p+1}")
except ValueError:
    print(f"element {s} is not found in the array")