bilangan = int(input())

if bilangan == 0 :
  print("nol")
elif bilangan > 0 and bilangan < 10 :
  print("satuan")
elif bilangan > 10 and bilangan <= 19 :
  print("belasan")
elif bilangan >= 20 and bilangan <= 99 or bilangan == 10:
  print("puluhan")
else :
  print("Anda Menginput Melebihi Limit Bilangan")