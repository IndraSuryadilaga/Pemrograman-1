baris1, baris2 = map(int, input().split())

if baris1 != baris2:
    print("Jumlah tidak sama")
    exit(1)

baris12 = [[0] * baris1 for _ in range(2)]
baris1X2 = [0] * baris1

for i in range(2):
    baris12[i] = list(map(int, input().split()))

for i in range(baris1):
    baris1X2[i] = baris12[0][i] * baris12[1][i]
    print(baris1X2[i], end=' ')