#Program to multiply two matrices

#First matrix
rows_a = int(input("Enter the Number of rows  for the first matrix: " ))
column_a = int(input("Enter the Number of Columns for the first matrix: "))

print("Enter the elements of First Matrix:")
matrix_a= [[int(input()) for i in range(column_a)] for i in range(rows_a)]
    
#Second matrix
rows_b = int(input("Enter the Number of rows for the second matrix: "))
column_b = int(input("Enter the Number of Columns for the second matrix: "))

print("Enter the elements of Second Matrix:")

matrix_b= [[int(input()) for i in range(column_b)] for i in range(rows_b)]

print("First Matrix is: ")
for n in matrix_a:
    print(n)

print("Second Matrix is: ")
for n in matrix_b:
    print(n)                                                                     
    
result=[[0 for i in range(column_b)] for i in range(rows_a)]

for i in range(len(matrix_a)):
    for j in range(len(matrix_b[0])):
        for k in range(len(matrix_b)):
            result [i][j]+=matrix_a[i][k]*matrix_b[k][j]
print("\nResultant Matrix of (Matrix_a X Matrix_b) is: ")
for r in result:
    print(r)
