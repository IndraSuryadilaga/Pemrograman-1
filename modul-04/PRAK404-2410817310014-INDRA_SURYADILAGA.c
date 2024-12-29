#include <stdio.h>

int main() {
    float bil_1, bil_2, hasil;
    int menu = 1;

    while (menu != 5) {
        printf("Pilih Program\n1.Penjumlahan\n2.Pengurangan\n3.Perkalian\n4.Pembagian\n5.Exit\nMasukan Pilihan : ");
        scanf("%d", &menu); 

        if (menu >= 1 && menu <= 4) {
            printf("Masukkan Nilai pertama : ");
            scanf("%f", &bil_1);
            printf("Masukkan Nilai Kedua : ");
            scanf("%f", &bil_2);
        }

        switch (menu) {
            case 1:
                hasil = bil_1 + bil_2;
                printf("Hasil pertambahan antara %.2f dengan %.2f adalah %.2f \n \n", bil_1, bil_2, hasil);
                break;
            case 2:
                hasil = bil_1 - bil_2;
                printf("Hasil pengurangan antara %.2f dengan %.2f adalah %.2f \n \n", bil_1, bil_2, hasil);
                break;
            case 3:
                hasil = bil_1 * bil_2;
                printf("Hasil perkalian antara %.2f dengan %.2f adalah %.2f \n \n", bil_1, bil_2, hasil);
                break;
            case 4:
                hasil = bil_1 / bil_2;
                printf("Hasil pembagian antara %.2f dengan %.2f adalah %.2f \n \n", bil_1, bil_2, hasil);
                break;
            case 5:
                printf("Terimakasih, telah menggunakan kalkulator Indra Suryadilaga \n \n");
                break;
            default:
                printf("Input anda salah, silahkan coba lagi \n \n");
        }
    }
    return 0;
}