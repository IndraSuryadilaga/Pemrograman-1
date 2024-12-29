#include <stdio.h>
#include <math.h>

int hitung(int nilai1, int nilai2) {
    return nilai1 - nilai2;
}

int mutlak(int angka) {
    return fabs(angka);
}

int main() {
    int x1, y1, x2, y2;
    scanf("%d %d %d %d", &x1, &y1, &x2, &y2);

    int Hasil = hitung(x1, x2) + hitung(y1, y2);
    printf("%d", mutlak(Hasil));
    return 0;
}