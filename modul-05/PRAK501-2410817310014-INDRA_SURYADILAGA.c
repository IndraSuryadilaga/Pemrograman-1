#include <stdio.h>

int MaxBilangan(int a, int b, int c, int d) {
    int hasil = a;
    if (b > hasil){
        hasil = b;
    } if (c > hasil){
        hasil = c;
    } if (d > hasil){
        hasil = d;
    } return hasil;
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int hasil = MaxBilangan(a, b, c, d);
    printf("%d", hasil);
    return 0;
}