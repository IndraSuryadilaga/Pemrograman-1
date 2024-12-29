zetsu = []
ruangan = int(input())
zetsu =  list(map(int, input().split()))

for i in range(len(zetsu)):
  zetsu[i] *= i+1

print(*zetsu)