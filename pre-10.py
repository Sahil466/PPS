import math

def find_roots(a, b, c):
    """
    Returns the roots of a quadratic function ax^2 + bx + c = 0.

    Args:
        a (float): The coefficient of the quadratic term.
        b (float): The coefficient of the linear term.
        c (float): The constant term.

    Returns:
        tuple: A tuple containing the two roots of the quadratic function.
    """
    # Calculate the discriminant
    discriminant = b**2 - 4*a*c

    # Check if the discriminant is negative
    if discriminant < 0:
        raise ValueError("The quadratic function has no real roots.")

    # Calculate the roots
    root1 = (-b + math.sqrt(discriminant)) / (2*a)
    root2 = (-b - math.sqrt(discriminant)) / (2*a)

    return root1, root2

# Example usage:
a = 1
b = -3
c = 2

try:
    root1, root2 = find_roots(a, b, c)
    print(f"The roots of the quadratic function are: {root1} and {root2}")
except ValueError as e:
    print(e)