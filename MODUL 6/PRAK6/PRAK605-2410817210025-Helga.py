a = int(input())
matrixa = []
print("Matriks A")
for i in range (a):
    j = list(map(int, input().split()))
    matrixa.append(j)
matrixb = []
print("Matriks B")
for i in range (a):
    j = list(map(int, input().split()))
    matrixb.append(j)
matrixs = []
print("Matrix AXB")
for i in range (a):
    matrixs.append([])
    for k in range (a):
        x = 0 
        for j in range(a):
            x = x + matrixa[i][j] * matrixb[j][k]
        matrixs[i].append(x)
for baris in matrixs:
    for j in baris:
        print(j, end = ' ')
    print()