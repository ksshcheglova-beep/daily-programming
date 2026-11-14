/*
 * Массив посетителей аттракционов
 * Идея: Щеглова Ксения (201ИС-25)
 * Реализация: Гусятинер Леонид
 * Дата: 12.11.2026
 * Задание для практики 1: Сортировка выбором по количеству посещений (по убыванию),
 * при равном количестве — в любом порядке.
2. Постраничная печать посетителей
3. Выбрать самые лучшие и самые худшие аттракционы 
(по среднему рейтингу). Написать функцию "Средний рейтинг".
4. Оформить меню
 */
#include <stdio.h>
#include <string.h>

#define MAXN 1000

typedef struct {
    int id;
    char visitor_name[20];
    char attrack_name[40];
    unsigned char rating;
} Visitor;

int count_visitor_visits(const Visitor array[], int count, const char *visitor_name) {
    int visits = 0;
    for (int i = 0; i < count; i++) {
        if (strcmp(array[i].visitor_name, visitor_name) == 0) {
            visits++;
        }
    }
    return visits;
}

void selection_sort_by_visits(Visitor array[], int count) {
    int visit_counts[MAXN];

    for (int i = 0; i < count; i++) {
        visit_counts[i] = count_visitor_visits(array, count, array[i].visitor_name);
    }

    for (int i = 0; i < count - 1; i++) {
        int max_idx = i;
        for (int j = i + 1; j < count; j++) {
            if (visit_counts[j] > visit_counts[max_idx]) {
                max_idx = j;
            }
        }

        if (max_idx != i) {
            Visitor temp_visitor = array[i];
            array[i] = array[max_idx];
            array[max_idx] = temp_visitor;

            int temp_count = visit_counts[i];
            visit_counts[i] = visit_counts[max_idx];
            visit_counts[max_idx] = temp_count;
        }
    }
}

int main() {
    Visitor array[MAXN];
    int count;

    scanf("%d", &count);

    for (int i = 0; i < count; i++) {
        scanf("%d %19s %39s %hhu",
              &array[i].id,
              array[i].visitor_name,
              array[i].attrack_name,
              &array[i].rating);
    }

    selection_sort_by_visits(array, count);
    printf("Отсортированный список\n");
    for (int i = 0; i < count; i++) {
        printf("%d %s %s %hhu\n",
               array[i].id,
               array[i].visitor_name,
               array[i].attrack_name,
               array[i].rating);
    }

    return 0;
}
