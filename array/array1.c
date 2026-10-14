///Array37. Дан массив размера N. Найти количество участков, на которых его элементы возрастают.
#include <stdio.h>
#define max_size 100
int main() {
    int n;
    scanf("%d", &n);
    
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    int count = 0;
    for (int i = 1; i < n; i++) {
        if (arr[i - 1] < arr[i]) {
            count++;
        }
    }

    printf("%d", count);
    return 0;
}
