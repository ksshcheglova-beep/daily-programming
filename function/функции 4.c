/*Proc29. Описать функцию DigitCount(K) целого типа, находящую количество цифр целого положительного числа K. Используя эту функцию, найти количество цифр для каждого из пяти данных целых положительных чисел*/
#include <stdio.h>
int DigitCount(int k)
{
    if (k > 0){
        return k;
    }
    else{
    return 0;}
}
int main() {
    int num;
    int count = 0;
    for(int i = 0; i < 5; i = i + 1){
        scanf("%d", &num);
        if (DigitCount(num)){
            count = count + 1;
        }
       
    }
     printf("%d", count);
        return 0;

}