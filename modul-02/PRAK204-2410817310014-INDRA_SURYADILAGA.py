Jari_Jari, Tinggi = map(float,input().split())
Volume = float(3.14 * Jari_Jari * Jari_Jari * Tinggi)
Luas = float(2 * 3.14 * Jari_Jari * (Jari_Jari + Tinggi))
Keliling = float(2 * 3.14 * Jari_Jari)

print(f"Volume   = {Volume:.2f} ")
print(f"Luas     = {Luas:.2f} ")
print(f"Keliling = {Keliling:.2f} ")