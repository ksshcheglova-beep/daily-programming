//отсортировать числа в массиве от максимального к минимальному
#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n); 
    int arr[n];
    for(int i = 0; i < n; i = i + 1){
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n - 1; i = i + 1) {
        int max = i; 
        for(int j = i + 1; j < n; j = j + 1){
            if(arr[j] > arr[max]){
                max = j; 
            } 
        }
        if (max != i) {
            int t = arr[i];
            arr[i] = arr[max];
            arr[max] = t;
        }
    }

    for(int i = 0; i < n; i = i + 1){
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
