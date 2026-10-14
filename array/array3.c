//индекс 1 макс значения
#include <stdio.h>
#define max_size 100
int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i = i + 1){
        scanf("%d", &arr[i]);
    }
    int max_idx = 0;
    for (int i = 0; i < n; i = i + 1) {
        if (arr[i] > arr[i - 1]) {
            max_idx = i;
        }
    }

    printf("%d\n", max_idx);

    return 0;
}