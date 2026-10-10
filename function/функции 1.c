//Proc16. Описать функцию Sign(X) целого типа, возвращающую для вещественного числа X следующие значения: −1, если X < 0; 0, если X = 0; 1, если X > 0. С помощью этой функции найти значение выражения Sign(A) + Sign(B) для данных вещественных чисел A и B.
#include <stdio.h>
int Sign(float x)
{
    if (x < 0){
        return -1;
    }
    else if (x > 0){
        return 1;
    }
    else{
        return 0;
    }

}
int main(void){
    float a, b;
    scanf("%f%f", &a, &b);
    float res = Sign(a) + Sign(b);
    printf("%f", res);
    return 0;
}