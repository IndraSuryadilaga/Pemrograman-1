#include <stdio.h>

int main() {
    int bil_1, bil_2, hasil;
    int total_semua = 0;
    scanf("%d %d", &bil_1, &bil_2);

    for (int i = 1; i <= bil_1;  i++){
        printf("(");
        int total_baris = 0;
        for(int j = i; j>= 1; j--){
            printf("%d * %d", j, bil_2);
            total_baris += j * bil_2;
            if (j > 1){
                printf(") + (");
            }
        }
        printf(") = %d\n", total_baris);
        total_semua += total_baris;
    }
    printf("%d\n", total_semua);
    return 0;
}