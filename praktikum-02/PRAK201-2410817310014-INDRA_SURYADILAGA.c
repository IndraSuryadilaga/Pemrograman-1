#include <stdio.h>

int main() {
    char nama[100], TTL[100], alamat[100], hobby[50], NO_HP[20];
    int NIM, kelasParalel;

    printf("Nama                   : ");
    fgets(nama, sizeof(nama), stdin);
    printf("NIM                    : ");
    scanf("%d", &NIM);
    printf("Kelas Paralel          : ");
    scanf("%d", &kelasParalel);
    printf("Tempat/Tanggal Lahir   : ");
    scanf("%s", TTL);
    getchar();
    printf("Alamat                 : ");
    fgets(alamat, sizeof(alamat), stdin);
    printf("Hobby                  : ");
    fgets(hobby, sizeof(hobby), stdin);
    printf("No. HP                 : ");
    scanf("%s", NO_HP);

    printf("Nama                   : %s", nama);
    printf("NIM                    : %d\n", NIM);
    printf("Kelas Paralel          : %d\n", kelasParalel);
    printf("Tempat/Tanggal Lahir   : %s\n", TTL);
    printf("Alamat                 : %s", alamat);
    printf("Hobby                  : %s", hobby);
    printf("No. HP                 : %s\n", NO_HP);

    return 0;
}