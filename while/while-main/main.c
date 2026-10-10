#include <stdio.h>
int main() {
    int n, i, x;
    int max;
    int count = 0;

    scanf("%d", &n);

    i = 0;
    while (i < n) {
        scanf("%d", &x);
        if (x % 2 == 0) {
            if (count == 0 || x > max) {
                max = x;
            }
            count = 1;
        }
        i = i + 1;
    }

    if (count == 0) {
        printf("Нет четных");
    }
    else {
        printf("max = %d\n", max);
    }

    return 0;
}