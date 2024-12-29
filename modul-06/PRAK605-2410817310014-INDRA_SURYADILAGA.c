#include <stdio.h>

int main() {
  int ordo;
  scanf("%d", &ordo);

  printf("Matriks A \n");
  int matrixA[ordo][ordo], matrixB[ordo][ordo];
  for (int i = 0; i < ordo; i++) {
      for (int j = 0; j < ordo; j++) {
          scanf("%d", &matrixA[i][j]);
      }
  }

  printf("Matriks B \n");
  for (int i = 0; i < ordo; i++) {
      for (int j = 0; j < ordo; j++) {
          scanf("%d", &matrixB[i][j]);
      }
  }

  int matrixAB[ordo][ordo];
  for (int i = 0; i < ordo; i++) {
      for (int j = 0; j < ordo; j++) {
          matrixAB[i][j] = 0;
          for (int k = 0; k < ordo; k++) {
              matrixAB[i][j] += matrixA[i][k] * matrixB[k][j];
          }
      }
  }

  printf("Matriks AXB\n");
  for (int i = 0; i < ordo; i++) {
      for (int j = 0; j < ordo; j++) {
          printf("%d ", matrixAB[i][j]);
      }
      printf("\n");
  }
  return 0;
}