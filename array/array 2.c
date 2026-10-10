//Array38. Дан массив размера N. Найти количество участков, на которых его элементы убывают.
#include <stdio.h>
#define max_size 100
int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i ++){
        scanf("%d", &arr[i]);
    }
    int count = 0;
    for(int i = 0; i < n; i++){
        if(arr[i - 1] > arr[i]){
            count = count + 1;
        }
    }
    printf("%d", count);
    return 0;
}