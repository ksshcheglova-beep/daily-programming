// String10. Дана строка. Вывести строку, содержащую те же символы, но рас-
// положенные в обратном порядке.

#include <stdio.h>
#define MAXN 1000
void process_string(char s[]) {
    int i, j;
    char c;
    j = 0;
    while (s[j] != '\0') { 
        j = j + 1; 
    }
    j = j - 1; 
    
    for (i = 0; i < j; i = i + 1, j = j - 1) {
        c = s[i];
        s[i] = s[j];
        s[j] = c;
    }
    
    printf("%s\n", s);
}

int main () {
    char s[MAXN];
    int i = 0;
    char ch;

    while (i < MAXN - 1) {
        scanf("%c", &ch);
        if (ch == '\n') {
            break;
        }
        s[i] = ch;
        i = i + 1;
    }
    s[i] = '\0';

    process_string(s);

    return 0;
}
