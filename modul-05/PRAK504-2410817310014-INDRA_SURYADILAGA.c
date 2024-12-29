#include <stdio.h>

int reverse(int num) {
    int reverse = 0;
    while (num != 0) {
        int single_num = num % 10;
        reverse = reverse * 10 + single_num;
        num /= 10;
    }
    return reverse;
}

int main() {
    int A, B;
    scanf("%d %d", &A, &B);

    A = reverse(A);
    B = reverse(B);
    int C = A + B;
    printf("%d", reverse(C));

    return 0;
}