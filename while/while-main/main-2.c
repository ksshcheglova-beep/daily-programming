#include <stdio.h>

int main() {
    double price;
    scanf("%lf", &price);
    double coant = 1;
    int i = 1;
    while (i <= 10 ) {
         coant = price * i;
         i++;
        printf("%lf\n", coant);
    }
    
    return 0;
}