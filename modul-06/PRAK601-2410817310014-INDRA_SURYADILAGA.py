matrik_baris = [[], []]
baris, kolom = map(int, input().split())
input_data = list(map(int, input().split()))

for i in range(0, len(input_data), kolom):
    baris = input_data[i:i + kolom]
    matrik_baris.append(baris)

for baris in matrik_baris:
    print(*baris)