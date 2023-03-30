print("Length of array: ")
x = int(input())
array = [0] * (x)

for i in range(0, x - 1 + 1, 1):
    print("Enter value of array[" + str(i) + "] :")
    y = int(input())
    array[i] = y
for i in range(0, x - 1 + 1, 1):
    for ci in range(0, x - 1 - i - 1 + 1, 1):
        if array[ci] > array[ci + 1]:
            z = array[ci]
            array[ci] = array[ci + 1]
            array[ci + 1] = z
for i in range(0, x - 1 + 1, 1):
    print(array[i])
