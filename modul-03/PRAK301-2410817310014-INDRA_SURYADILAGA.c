#include <stdio.h>

int main() {
    int bil_1, bil_2, bil_3;
    scanf("%d %d %d", &bil_1, &bil_2, &bil_3);

    int urutan_1 = bil_1;
    int urutan_2 = bil_2;
    int urutan_3 = bil_3;

    if (bil_1 >= bil_2 && bil_1 >= bil_3) {
        urutan_1 = bil_1;
        if (bil_2 >= bil_3) {
            urutan_2 = bil_2;
            urutan_3 = bil_3;
        } else {
            urutan_2 = bil_3;
            urutan_3 = bil_2;
        }
    } else if (bil_2 >= bil_1 && bil_2 >= bil_3) {
        urutan_1 = bil_2;
        if (bil_1 >= bil_3) {
            urutan_2 = bil_1;
            urutan_3 = bil_3;
        } else {
            urutan_2 = bil_3;
            urutan_3 = bil_1;
        }
    } else {
        urutan_1 = bil_3;
        if (bil_1 >= bil_2) {
            urutan_2 = bil_1;
            urutan_3 = bil_2;
        } else {
            urutan_2 = bil_2;
            urutan_3 = bil_1;
        }
    }

    printf("%d %d %d\n", urutan_1, urutan_2, urutan_3);
    return 0;
}