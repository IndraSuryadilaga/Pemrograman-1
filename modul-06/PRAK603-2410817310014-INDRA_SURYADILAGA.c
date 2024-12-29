#include <stdio.h>

int main() {
  int baris1, baris2;
  scanf("%d %d", &baris1, &baris2);
  if (baris1 != baris2) {
    printf("Jumlah tidak sama");
    return 1;
  }

  int baris12[3][baris1];
  int baris1X2[baris1];
  for (int i=0; i < 2; i++) {
    for (int j=0; j < baris1; j++) {
      scanf("%d", &baris12[i][j]);
    }
  }

  for (int i=0; i < baris1; i++) {
    baris1X2[i] = baris12[0][i] * baris12[1][i];
    printf("%d ", baris1X2[i]);
  }
  return 0;
}