def MaxBilangan(a, b, c, d):
  hasil = a
  if b > hasil:
    hasil = b
  if c > hasil:
    hasil = c
  if d > hasil:
    hasil = d
  return hasil

a, b, c, d = map(int, input().split())
hasil = int(MaxBilangan(a, b, c, d))
print(hasil)