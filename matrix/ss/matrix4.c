// Matrix4. Даны целые положительные числа M, N и набор из N чисел. Сфор-
// мировать матрицу размера M × N, у которой в каждой строке содержатся
// все числа из исходного набора (в том же порядке).
#include <stdio.h>
#define max_m 100
#define max_n 100
int main(){
    int mat[max_m][max_n];
    int m, n;
    scanf("%d %d", &m, &n);
    int i = 0;
    int source_arr[max_n]; 

    for (i = 0; i < n; i = i + 1) {
        scanf("%d", &source_arr[i]);
    }
    int r = 0;
    int c = 0;
    for (r = 0; r < m; r = r + 1) {
        for (c = 0; c < n; c = c + 1) {
            mat[r][c] = source_arr[c];
        }
    }
    for (r = 0; r < m; r = r + 1) {
        for (c = 0; c < n - 1; c = c + 1) {
            printf("%d ", mat[r][c]);
        }
        if (n > 0) {
            printf("%d", mat[r][n - 1]);
        }
        printf("\n");
    }
    
    return 0;
}
