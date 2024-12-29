def hitung(nilai1, nilai2):
  return nilai1 - nilai2

def mutlak(angka):
  return abs(angka)

x1, y1, x2, y2 = map(int, input().split())
Hasil = hitung(x1, x2) + hitung(y1, y2)
print(mutlak(Hasil))