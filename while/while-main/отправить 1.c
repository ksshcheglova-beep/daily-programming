/*Дано вещественное число — цена 1 кг конфет. Вывести стоимость 1.2,
1.4,. . . , 2 кг конфет.*/
#include <stdio.h>

int main() {
    double price;
    scanf("%lf", &price);
    double weight = 0.1;
    double coant = 1;
    int i = 1;
    while (i <= 10 ) {
         weight = 1.2 * i;
         coant = weight * price;
         i++;
        printf("%lf\n", coant);
    }
    
    return 0;
}
