//Напишите программу, выводящую на экран все элементы массива, которые меньше последнего элемента и больше первого элемента массива.
#include <stdio.h>

int main(void){
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);}
    int m = arr[n - 1];
    int k = arr[0];
    int count = 0;
    for (int i = 0; i < n; i ++){
        if (arr[i] < m && arr[i] > k){
        printf("%d ", arr[i]);
        count = 1;}
    }
    
    if (count != 1)
        printf("0");
    
    return 0;
}