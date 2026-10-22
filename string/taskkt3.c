// 1. функция получает на вход строку изображающую целое неотрицательное число 
// вернуть это число 

#include <stdio.h>
#define MAX_SIZE 100
int my_aloi(char str[MAX_SIZE]){
    int num = 0;
    int i = 0;
    while (str[i] != '\0') {
        int digital = str[i] - '0';
        num = num * 10 + digital;
        i = i + 1;
    }
    return num;
}
int main() {
    char str[MAX_SIZE];
    int n;
    int digital = 0;
    scanf("%d", &n); 
    int i = 0;
    for (i = 0; i < n; i = i + 1){
        scanf("%d", &digital);
        str[i] = digital + '0';
    }
    str[i] = '\0';
    int result_num = my_aloi(str);
    printf("%d\n", result_num);
    return 0;
}
