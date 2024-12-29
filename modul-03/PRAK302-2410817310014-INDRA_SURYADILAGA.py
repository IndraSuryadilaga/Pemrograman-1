nilai = int(input("Masukan nilai   :"))

if nilai >= 80 :
  grade = 'A'
elif nilai >= 70 :
  grade = 'B'
elif nilai >= 60 :
  grade = 'C'
elif nilai >= 50 :
  grade = 'D'
else :
  grade = 'E'

print(f"Grade anda\t: {grade}")