#include <stdio.h>

int main() {
  int a = 4, b = 5, c = 7;
  int harga = 85000;
  int keliling = a + b + c;
  int biaya = keliling * harga;

  printf("Diketahui :\n");
  printf("Panjang sisi segitiga berturut turut adalah %d, %d, %d\n", a, b, c);
  printf("Keliling tanah Pak Dengklek adalah %d\n", keliling);
  printf("Harga tanah per meter adalah Rp.%d\n", harga);
  printf("Jawab :\n");
  printf("Biaya yang diperlukan pak Dengklek adalah : Rp.%d\n", biaya);
}