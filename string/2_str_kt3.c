//2.Функция получает на вход строкуу вывести ее длину
#include <stdio.h>
#define max_size 1000
int my_strlen(char s[]){
    int lenth = 0;
    while (s[lenth] != '\0'){
        lenth = lenth + 1;
    }
    return lenth;
}
int main(){
    char str[max_size];
    scanf("%s", str);
    int len = my_strlen(str);
    printf("%d", len);
    return 0;
}