// Array67. Дан целочисленный массив размера N. Увеличить все нечетные чис-
// ла, содержащиеся в массиве, на исходное значение последнего нечетного
// числа. Если нечетные числа в массиве отсутствуют, то оставить массив
// без изменений.
#include <stdio.h>
#define max_size 100
int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i = i + 1){
        scanf("%d", &arr[i]);
    }
    int num = 0;
    for(int i = 0; i < n; i = i + 1){
        if(arr[i] % 2 != 0){
            num = arr[i];
        }
    }
    for(int i = 0; i < n; i = i + 1){
            if(arr[i] % 2 != 0){
                arr[i] = arr[i] + num;
            }
        }
        for(int i = 0; i < n; i = i + 1){
        printf("%d ", arr[i]);}
return 0;
}
    
