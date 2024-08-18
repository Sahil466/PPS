def swap_numbers(a, b):
    a, b = b, a
    return a, b

# Example usage
x = 5
y = 10

x, y = swap_numbers(x, y)
print("After swapping: x =", x, ", y =", y)
