#   recursive mathod
# def find_fact(n):
#     if n == 0:
#         return 1
#     else:
#         return n * find_fact(n-1)

# n = int(input("Enter the value: "))
# factorial = find_fact(n)
# print("Factorial of", n, "is:", factorial)

def find_fact(n):
    fact = 1
    while n > 0:
        fact *= n
        n -= 1
    return fact

n = int(input("Enter the value: "))
factorial = find_fact(n)
print("Factorial of", n, "is:", factorial)