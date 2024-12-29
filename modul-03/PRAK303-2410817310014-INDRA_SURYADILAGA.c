#include <stdio.h>

int main() {
    int bilangan ;
    scanf("%d", &bilangan);

    if (bilangan > 0){
        printf("positif");}
    else if (bilangan < 0){
        printf("negatif");}
    else if (bilangan == 0){
        printf("nol");}
    else {
        printf("eror");
    }
    return 0;
}