//3.функция получает на вход строку. перевернуть ее
#include <stdio.h>
#define max_size 1000
void my_reverse(char s[]){
    int lenth = 0;
    while(s[lenth] != '\0'){
        lenth = lenth + 1;
    }
    int first = 0;
    int last = lenth - 1;
    while (first < last){
        char temp = s[first];
        s[first] = s[last];
        s[last] = temp;
        first = first + 1;
        last = last - 1;
    }
}
int main(void){
    char str[max_size];
    scanf("%s", str);
    my_reverse(str);
    printf("%s", str);
    return 0;
}