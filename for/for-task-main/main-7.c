/*Дано целое число N (> 1) и набор из N целых чисел. Вывести те
элементы в наборе, которые меньше своего левого соседа, и количество K таких элементов.*/
#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int num1, num2;
    int k = 0;
    scanf("%d", &num2);
    for (int i = 1; i < n; i++) {
        scanf("%d", &num1);
        if (num1 < num2) {
            printf("%d ", num1);
            k++;
        }
        num2 = num1;
    }
    
    printf("%d\n", k);

    return 0;
}