#include <stdio.h>

int main() {
    int bil_maksimal;
    scanf("%d", &bil_maksimal);
    int bilangan = 1;

    while (bilangan <= bil_maksimal) {
        if (bilangan % 2 == 1) {
            printf("%d ", bilangan);
        }
        bilangan++;
    }
    printf("\n");

    while (bil_maksimal >= 2) {
        if (bil_maksimal % 2 ==0) {
            printf("%d ", bil_maksimal);
        }
        bil_maksimal--;
    }
    return 0;
}