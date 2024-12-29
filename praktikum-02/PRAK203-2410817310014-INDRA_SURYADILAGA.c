#include <stdio.h>

int main() {
    int a, b, i, j, x, y;
    scanf("%d %d %d %d %d %d", &a, &b, &i, &j, &x, &y);

    float Total = a - b  * i / j - x + y;
    printf("%.3f ", Total);
    return 0;
}