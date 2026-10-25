// Matrix7◦. Дана матрица размера M × N и целое число K (1 ≤ K ≤ M). Вывести
// элементы K-й строки данной матрицы.
#include <stdio.h>
#define max_m 100
#define max_n 100
int main(){
    int mat[max_m][max_n];
    int m, n;
    scanf("%d %d", &m, &n);
    int k;
    int i, j;

    for (i = 0; i < n; i = i + 1) {
         for (j = 0; j < n; j = j + 1) {
        scanf("%d", &mat[i][j]);
        }
    }
    scanf("%d", &k);
    for(j = 0; j < n; ++j){
        printf("%d ", mat[k - 1][j]);
    }
    return 0;
}
