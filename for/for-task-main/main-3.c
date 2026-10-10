/*Даны десять вещественных чисел. Найти их сумму.*/
#include <stdio.h>

int main() {
    float sum = 0;
    float num;
    for(int i = 0; i < 10; i++){
        scanf("%f", &num);
        sum = sum + num;

    }
   printf("%f", sum);

    return 0;
}