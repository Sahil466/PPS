rows1 = int(input("Enter the number of rows: "))
cols1 = int(input(" Enter the number of columns: "))

matrix1 = []
for i in range(rows1):
    row = []
    for j in range(cols1):
        element = int(input(f"Enter element [{i}][{j}]: "))
        row.append(element)
    matrix1.append(row)

print("The matrix1 is: ")
for row in matrix1:
    print(row)

rows2 = int(input("Enter the number of rows: "))
cols2 = int(input(" Enter the number of columns: "))

matrix2 = []
for i in range(rows2):
    row = []
    for j in range(cols2):
        element = int(input(f"Enter element [{i}][{j}]: "))
        row.append(element)
    matrix2.append(row)

print("The matrix2 is: ")
for row in matrix2:
    print(row)

# Calculate and print product
if cols1 != rows2:
    print("Error: Matrices cannot be multiplied")
else:
    result = [[0 for _ in range(cols2)] for _ in range(rows1)]

    for i in range(rows1):
        for j in range(cols2):
            for k in range(cols1):
                result[i][j] += matrix1[i][k] * matrix2[k][j]

        print("Product:")
    for row in result:
        print(row)