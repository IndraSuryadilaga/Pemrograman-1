bil_maksimal = int(input())
bilangan = 1

while bilangan <= bil_maksimal :
  if bilangan % 2 == 1 :
    print(bilangan, end=" ")
  bilangan += 1

print(f" ")

while bil_maksimal >= 2 :
  if bil_maksimal % 2 == 0 :
    print(bil_maksimal, end=" ")
  bil_maksimal -= 1