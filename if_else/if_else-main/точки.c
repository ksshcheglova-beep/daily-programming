#include <stdio.h>
#include <locale.h>
int main() {
    setlocale(LC_ALL, "");
    int x1, y1; 
    int x2, y2; 
    scanf("%d%d", &x1, &y1);
    scanf("%d%d", &x2, &y2);
    int dist1 = x1 * x1 + y1 * y1;
    int dist2 = x2 * x2 + y2 * y2;
    if (dist1 < dist2) {
        printf("Первая точка ближе");
    } else if (dist2 < dist1) {
        printf("Вторая точка ближе");
    } else {
        printf("Точки находятся на одинаковом расстоянии\n");
    }

    return 0;
}
