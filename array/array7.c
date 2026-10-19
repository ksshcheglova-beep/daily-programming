// Array113. Дан массив A размера N (≤ 6). Упорядочить его по возрастанию
// методом сортировки простым выбором: найти максимальный элемент
// массива и поменять его местами с последним (N-м) элементом; выполнить
// описанные действия N− 1 раз, каждый раз уменьшая на 1 количество
// анализируемых элементов и выводя содержимое массива.
#include <stdio.h>
#define max_size 100
int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i = i + 1){
        scanf("%d", &arr[i]);
    }
    for(int i = 0; i < n - 1 ; i = i + 1){
        int max_num = i;
        for (int j = i + 1; j < n; j = j + 1){
        if (arr[i] > arr[max_num]){
            max_num = j;
        }
    }
        if (max_num != n - 1- i){
            int t = arr[n - 1 - i];
            arr[n - 1] = arr[max_num];
            arr[max_num] = t;
        }
    }
      for(int i = 0; i < n; i = i + 1){
        printf("%d ", arr[i]);
    }
  return 0;
}
