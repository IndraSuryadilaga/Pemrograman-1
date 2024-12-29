#include <stdio.h>

int main() {
    int putaran = 5, jarak = 14;
    float jarijari = jarak / (2 * 3.14 * putaran);
    
    printf("Diketahui:\n");
    printf("Pak dengklek mengelilingi taman = %d Putaran\n", putaran);
    printf("Jarak tempuh Pak dengklek = %d Kilometer\n", jarak);
    printf("Jawab :\n");
    printf("Jari-jari taman yang dikelilingi Pak Dengklek adalah %.2f Kilometer\n", jarijari);
    return 0;
}