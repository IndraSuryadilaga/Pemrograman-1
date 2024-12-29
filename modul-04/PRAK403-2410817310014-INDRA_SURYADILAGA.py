bil_1, bil_2 = map(int, input().split())

if bil_1 >= bil_2:
  bil_maksimal = bil_1
  bil_minimal = bil_2
  while bil_maksimal >= bil_minimal:
    print(f"{bil_1} {bil_2}", end=" ")
    if bil_maksimal > bil_minimal :
      print("-", end=" ")
    bil_maksimal -= 1
    bil_1 -= 1
    bil_2 += 1

else :
  bil_maksimal = bil_2
  bil_minimal = bil_1
  while bil_maksimal >= bil_minimal:
    print(f"{bil_1} {bil_2}", end=" ")
    if bil_maksimal > bil_minimal :
      print("-", end=" ")
    bil_maksimal -= 1
    bil_1 += 1
    bil_2 -= 1