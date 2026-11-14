/*
Разность дат. Вариант 1. 6 переменных
*/

#include <stdio.h>

typedef struct {
    int year;
    int month;
    int day;
} Date;

int main() {
    Date date_begin;
    Date date_end;
    Date date_diff;
    scanf("%d.%d.%d", &date_begin.year, &date_begin.month, &date_begin.day);
    scanf("%d.%d.%d", &date_end.year, &date_end.month, &date_end.day);

    if (date_end.day < date_begin.day) {
        int prev_month = date_end.month - 1;
        if (prev_month == 0) prev_month = 12; 
        int days_in_month;
        int days_in_prev = days_in_month[prev_month];
        if (prev_month == 2 && ((date_end.year % 4 == 0 && date_end.year % 100 != 0) || (date_end.year % 400 == 0))) {
            days_in_prev = 29; 
        }

        date_end.day += days_in_prev;
        date_end.month -= 1;
    }
    date_diff.day = date_end.day - date_begin.day;
    if (date_end.month < date_begin.month) {
        date_end.month += 12;
        date_end.year -= 1;
    }
    date_diff.month = date_end.month - date_begin.month;
    date_diff.year = date_end.year - date_begin.year;
    printf("Разница: %d лет, %d месяцев, %d дней\n", date_diff.year, date_diff.month, date_diff.day);

    return 0;
}
