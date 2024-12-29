#include <stdio.h>
#include <string.h>

int main() {
    char sandi[100], pesan[100];
    fgets(sandi, sizeof(sandi), stdin);
    fgets(pesan, sizeof(pesan), stdin);

    if (strlen(sandi) != strlen(pesan)) {
        printf("Panjang kalimat berbeda, pesan palsu");
        return 0;
    }

    int bintang = 0, pagar = 0;
    for (int i=0; i < strlen(sandi)-1; i++) {
        if (sandi[i] == pesan[i]) {
            if (sandi[i] == ' ') {
                printf(" ");
            } else {
                printf("*");
                bintang += 1;
            }
        } else {
            printf("#");
            pagar += 1;
        }
    }
       
    printf("\n* = %d", bintang);
    printf("\n# = %d\n", pagar);
    if (bintang >= pagar) {
        printf("Pesan asli\n");
    } else {
        printf("Pesan palsu");
    }
    return 0;
}