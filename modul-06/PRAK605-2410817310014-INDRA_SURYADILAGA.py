ordo = int(input())

print("Matriks A")
matrixA = []
for i in range(ordo):
    baris = list(map(int, input().split()))
    matrixA.append(baris)

print("Matriks B")
matrixB = []
for i in range(ordo):
    baris = list(map(int, input().split()))
    matrixB.append(baris)

matrixAB = [[0 for _ in range(ordo)] for _ in range(ordo)]
for i in range(ordo):
    for j in range(ordo):
        for k in range(ordo):
            matrixAB[i][j] += matrixA[i][k] * matrixB[k][j]

print("Matriks AXB")
for baris in matrixAB:
    print(" ".join(map(str, baris)))
