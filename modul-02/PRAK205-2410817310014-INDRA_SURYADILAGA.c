#include <stdio.h>
#include <math.h>

int main() {
    int A, B;
    scanf("%d", &A);
    scanf("%d", &B);

    int Sisi_Tinggi = A;
    int Sisi_Miring = B;
    int Sisi_Alas = sqrt(Sisi_Miring * Sisi_Miring - Sisi_Tinggi * Sisi_Tinggi);
    int Keliling = Sisi_Alas + Sisi_Tinggi + Sisi_Miring;
    int Luas = Sisi_Tinggi * Sisi_Alas /2;

    printf("Alas     = %d cm \n", Sisi_Alas);
    printf("Tinggi   = %d cm \n", Sisi_Tinggi);
    printf("Keliling = %d cm \n", Keliling );
    printf("Luas     = %d cm^2 \n", Luas );
    return 0;
}