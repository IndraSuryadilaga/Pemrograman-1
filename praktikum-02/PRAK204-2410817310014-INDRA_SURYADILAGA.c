#include <stdio.h>

int main() {
    float Jari_Jari, Tinggi;
    scanf("%f", &Jari_Jari);
    scanf("%f", &Tinggi);

    float Volume = 3.14 * Jari_Jari * Jari_Jari * Tinggi;
    float Luas = 2 * 3.14 * Jari_Jari * (Jari_Jari + Tinggi);
    float Keliling = 2 * 3.14 * Jari_Jari;
    printf("Volume   = %.2f \n", Volume);
    printf("Luas     = %.2f \n", Luas);
    printf("Keliling = %.2f \n", Keliling );

    return 0;
}