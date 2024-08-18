def fibonacci(n):
    fib_series = [0, 1]
    while True:
        next_term = fib_series[-1] + fib_series[-2]
        if next_term > n:
            break
        fib_series.append(next_term)
    return fib_series

# Example usage:
n = int(input("Enter the value till you want to generate the fibonac ci series : "))  # maximum value in the series
print( "The fibonacci series till",n,"is:",fibonacci(n))