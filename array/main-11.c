//Дан массив размера N, все элементы которого, кроме последнего,упорядочены по возрастанию. Сделать массив упорядоченным, переместив последний элемент на новую позицию.
#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int last = arr[n - 1]; 
    int i = n - 2;
    while (i >= 0 && arr[i] > last) {
        arr[i + 1] = arr[i];
        i--;
    }
    arr[i + 1] = last;
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
