def maksimal(a, b) :
  if b > a :
    return b
  else :
    return a

def minimal(a, b) :
  if b < a :
    return b
  else :
    return a

batas =  0
maks = -100000
minim = 100000

bilangan = int(input())
nilai = list(map(int, input().split()))

for n in nilai:
  maks = maksimal(maks, n)
  minim = minimal(minim, n)
batas = batas + 1

print(maks, minim)