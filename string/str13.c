//String13. Дана строка. Подсчитать количество содержащихся в ней цифр.
#include <stdio.h>
#define MAX_SIZE 100
int main(){
    char str[MAX_SIZE];
    int i = 0;
    char ch;
    ch = getchar();
    while (ch != '\n' && ch != EOF && i < MAX_SIZE - 1) {
        str[i] = ch;
        i = i + 1;
        ch = getchar();
    }
    str[i] = '\0'; 
    int count = 0;
    for(int j = 0; str[j] != '\0'; j = j + 1){
        if (str[j] >= '0' && str[j] <= '9') {
            count = count + 1;
        }
    }
    printf("%d\n", count);

    return 0;
}
