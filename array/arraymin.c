#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n); 
    int arr[n];
    for(int i = 0; i < n; i = i + 1){
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n - 1; i = i + 1) {
        int min = i; 
        for(int j = i + 1; j < n; j = j + 1){
            if(arr[j] < arr[min]){
                min = j; 
            } 
        }
        if (min != i) {
            int t = arr[i];
            arr[i] = arr[min];
            arr[min] = t;
        }
    }

    for(int i = 0; i < n; i = i + 1){
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
