// Matrix10. Дана матрица размера M × N. Вывести ее элементы, расположенные
// в строках с нечетными номерами (1, 3,. . .). Вывод элементов производить
// по строкам, условный оператор не использовать.
#include <stdio.h>
#define max_m 100
#define max_n 100
int main() {
    int mat[max_m][max_n];
    int m, n;
    scanf("%d %d", &m, &n);
    int i, j;
    for(i = 0; i < m; ++i){
        for(j = 0; j < n; ++j){
            scanf("%d", &mat[i][j]);
        }
    }
        for (i = 0; i < m; i += 2) {
            for (j = 0; j < n; ++j) {
                printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
    return 0;
}