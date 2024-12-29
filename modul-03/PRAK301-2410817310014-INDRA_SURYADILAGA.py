bil_1, bil_2, bil_3 = map(int, input().split())

urutan_1, urutan_2, urutan_3 = bil_1, bil_2, bil_3

if bil_1 >= bil_2 and bil_1 >= bil_3 :
  urutan_1 = bil_1
  if bil_2 >= bil_3 :
      urutan_2 = bil_2
      urutan_3 = bil_3
  else :
      urutan_2 = bil_3
      urutan_3 = bil_2

elif bil_2 >= bil_1 and bil_2 >= bil_3 :
  urutan_1 = bil_2
  if bil_1 >= bil_3 :
      urutan_2 = bil_1
      urutan_3 = bil_3
  else :
      urutan_2 = bil_3
      urutan_3 = bil_1

else :
  urutan_1 = bil_3
  if bil_1 >= bil_2 :
      urutan_2 = bil_1
      urutan_3 = bil_2
  else :
      urutan_2 = bil_2
      urutan_3 = bil_1

print(f"{urutan_1} {urutan_2} {urutan_3}")