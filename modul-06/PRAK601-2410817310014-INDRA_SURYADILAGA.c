#include <stdio.h> 

int main() {
    int baris , kolom;
    int matrik_baris[100][100];
    scanf("%d %d", &baris, &kolom);

    for (int i = 0; i < baris; i++) {
        for (int j = 0; j < kolom; j++) {
            scanf("%d", &matrik_baris[i][j]);
        }
    }
    
printf("\n");
    for (int i = 0; i < baris; i++) {
        for (int j = 0; j < kolom; j++) {
            printf("%d ", matrik_baris[i][j]);
        }
        printf("\n");
    }

    return 0;
}

