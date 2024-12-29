#include <stdio.h>

int main() {
    float Nilai_1, Nilai_2;
    printf("Masukan Nilai Pertama : ");
    scanf("%f", &Nilai_1);
    printf("Masukan Nilai Kedua   : ");
    scanf("%f", &Nilai_2);

    float Nilai_Total = Nilai_1 + Nilai_2;
    printf("Hasil dari penjumlahan nilai pertama \"%.2f\" dan nilai kedua \"%.2f\" adalah \"%.2f\"", Nilai_1, Nilai_2, Nilai_Total);
    return 0;
}