#include <stdio.h>

void Biodata(int TahunLahir, char Namaku[], char Asal[]){
    printf("Perkenalkan Nama Saya : %s \n", Namaku);
    printf("Umur Saya : %d \n", 2024 - TahunLahir);
    printf("Saya Adalah Angkatan : 2024 \n");
    printf("Asal Saya dari : %s \n", Asal);
}

int main() {
    int TahunLahir;
    char Namaku[20],Asal[15];
    scanf(" %d",&TahunLahir);
    scanf(" %[^\n]%*c",&Namaku);
    scanf(" %[^\n]%*c",&Asal);
    Biodata(TahunLahir, Namaku, Asal);
    return 0;
}