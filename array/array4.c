//Array48. Дан целочисленный массив размера N. Найти максимальное количество его одинаковых элементов.
#include <stdio.h>
#define max_size 100
int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i ++){
        scanf("%d", &arr[i]);
    }
    int count = 0;
    int first_num = arr[0];
    for(int i = 0; i < n; i ++){
        if (first_num == arr[i]){ 
            count = count + 1;
        }
        else{
            count = 0;
        }
    }
    printf("%d", count);
    return 0;
}
