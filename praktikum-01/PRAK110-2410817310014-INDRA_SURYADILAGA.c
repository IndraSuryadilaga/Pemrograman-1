#include <stdio.h>
#include <math.h>

int main() {
    int alas = 5;
    int tinggi = 12;
    float miring = sqrt(alas*alas + tinggi*tinggi);
    
    printf("Diketahui :\n");
    printf("Alas   = %d cm\n", alas);
    printf("Tinggi = %d cm\n", tinggi);
    printf("Jawab :\n");
    printf("Sisi A = %d cm\n", tinggi);
    printf("Sisi B = %.0f cm\n", miring);
    printf("Sisi C = %d cm\n", alas);
    printf("Keliling = %.0f cm\n", alas + tinggi + miring);
    printf("Luas     = %.0f cm^2\n", (alas * tinggi) / 2);
    return 0;
}