#include <stdio.h>

int main() {
    int bil_1, bil_2;

    scanf("%d %d", &bil_1, &bil_2);

    if (bil_1 > bil_2) {
        int bil_maksimal = bil_1;
        int bil_minimal = bil_2;
        while (bil_maksimal >= bil_minimal) {
            printf("%d %d", bil_1, bil_2);
            if (bil_maksimal > bil_minimal) {
                printf(" - ");
            }
            bil_maksimal--;
            bil_1--;
            bil_2++;
        }
    }
    else {
        int bil_maksimal = bil_2;
        int bil_minimal = bil_1;
        while (bil_maksimal >= bil_minimal) {
            printf("%d %d", bil_1, bil_2);
            if (bil_maksimal > bil_minimal) {
                printf(" - ");
            }
            bil_maksimal--;
            bil_1++;
            bil_2--;
        }
    }
    return 0;
}