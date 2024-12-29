#include <stdio.h>

int main() {
    int bilangan;
    scanf("%d", &bilangan);

    if (bilangan == 0) {
        printf("nol");
    }
    else if (bilangan > 0 && bilangan < 10) {
        printf("satuan");
    }
    else if (bilangan > 10 && bilangan < 20) {
        printf("belasan");
    }
    else if (bilangan >= 20 && bilangan <= 99 || bilangan == 10) {
        printf("puluhan");
    }
    else {
        printf("Anda Menginput Melebihi Limit Bilangan");
    }
    return 0;
}