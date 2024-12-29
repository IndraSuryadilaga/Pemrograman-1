import math

A,B = map(float,input().split())
Sisi_Tinggi = int(A)
Sisi_Miring = int(B)
Sisi_Alas = int(math.sqrt(Sisi_Miring * Sisi_Miring - Sisi_Tinggi * Sisi_Tinggi))
Keliling = int(Sisi_Alas + Sisi_Tinggi + Sisi_Miring)
Luas = int(Sisi_Tinggi * Sisi_Alas / 2)

print(f"Alas = {Sisi_Alas} cm")
print(f"Tinggi = {Sisi_Tinggi} cm")
print(f"Keliling = {Keliling} cm")
print(f"Luas = {Luas} cm^2")