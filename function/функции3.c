/*Proc24. Описать функцию Even(K) логического типа, возвращающую 1,если целый параметр K является четным, и 0 в противном случае. С ее помощью найти количество четных чисел в наборе из 10 целых чисел.*/
#include <stdio.h>

int Even(int k)
{
    if (k % 2 == 0) {
        return 1;
    }
    else {
        return 0;
    }
}
int main ()
{
    int num;
    int count = 0;
    for (int i = 0; i < 10; i = i + 1) {
        scanf("%d", &num);
        if (Even(num)) {
            count = count + 1;
        }
    }
    printf("%d\n", count);
    return 0;
}
