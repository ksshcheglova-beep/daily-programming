// String8. Дано целое число N (> 0) и символ C. 
// Вывести строку длины N, которая состоит из символов C.
// Щеглова К.В., Гусятинер Л.Б., 201ИС-25, 20.10.2026

void make_str(char s[], int n, char c);
#include <stdio.h>
#define MAXN 1000
int main () {
    int n;
    char c;
	char s[MAXN]; // пока мусор
    
    scanf("%d", &n);
    scanf(" %c", &c);
	
	make_str(s, n, c);

	printf("%s\n", s);
    return 0;
}

void make_str(char s[], int n, char c) {
	int i;
	for(i = 0; i < n; i = i + 1) {
		s[i] = c;
	}
	s[i] = '\0';
}

