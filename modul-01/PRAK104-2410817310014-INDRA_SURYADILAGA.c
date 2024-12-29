#include <stdio.h>

int main() {
    int hargaA = 100000, hargaB = 200000;
    float diskonA = 15, diskonB = 70;
    
    printf("Harga sepatu A adalah %d\n",hargaA);
    printf("Harga sepatu B adalah %d\n",hargaB);
    printf("Harga sepatu A setelah diskon %.0f%% adalah %.0f \n", diskonA, hargaA-hargaA*diskonA/100);
    printf("Harga sepatu B setelah diskon %.0f%% adalah %.0f \n", diskonB, hargaB-hargaB*diskonB/100);
    return 0;
}