def find_greatest(a, b, c):
    """
    Returns the greatest of three numbers.

    Args:
        a (int): The first number.
        b (int): The second number.
        c (int): The third number.

    Returns:
        int: The greatest of the three numbers.
    """
    if a >= b and a >= c:
        return a
    elif b >= a and b >= c:
        return b
    else:
        return c

# Example usage:
num1 = 10
num2 = 20
num3 = 30

greatest = find_greatest(num1, num2, num3)
print(f"The greatest number is: {greatest}")