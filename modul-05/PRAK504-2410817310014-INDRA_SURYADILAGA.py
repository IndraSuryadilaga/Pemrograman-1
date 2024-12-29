def reverse(num) :
  reverse = 0
  while num != 0 :
    single_num = num % 10
    reverse = reverse * 10 + single_num
    num //= 10
  return reverse

A, B = map(int, input().split())
A = reverse(A)
B = reverse(B)
C = A + B
print(reverse(C))