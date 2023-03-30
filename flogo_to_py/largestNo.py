a = [0] * (5)

for i in range(0, 4 + 1, 1):
    print("Enter value of Array[" + str(i) + "]")
    a[i] = int(input())
y = a[0]
for i in range(0, 4 + 1, 1):
    if y < a[i]:
        y = a[i]
print("Largest number: " + str(y))
