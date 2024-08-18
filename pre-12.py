
# n = int(input("Enter the number : "))
# flag = True
# for i in range(2, n):
#     if n % i == 0:
#         flag = False
#         break

# if flag:
#     print(n, "is a prime number")
# else:
#     print(n, "is not a prime number")

def check_prime():
    n = int(input("Enter the number : "))
    flag = True
    for i in range(2, int(n ** 0.5) + 1):
        if n % i == 0:
            flag = False
            break
    if flag:
        print(n, "is a prime number")
    else:
        print(n, "is not a prime number")

check_prime()
check_prime()