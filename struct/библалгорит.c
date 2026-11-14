#include <stdio.h>
#include <string.h>

typedef struct {
    char pasport_reader[11]; 
    char surname_reader[21]; 
    char name_reader[20];   
} reader;

typedef struct {
    int id_book;
    char title_book[20];
    char author[20];
} book;

typedef struct {
    int id_arenda;
    char pasport_reader[11]; 
    int id_book;            
    char date_give[11];      
    char date_return[11];  
} arenda;

void read_reader(reader *r) {
    scanf("%10s", r->pasport_reader);
    scanf("%20s", r->surname_reader);
    scanf("%19s", r->name_reader);
}

void read_book(book *b) {
    scanf("%d", &b->id_book);
    scanf("%19s", b->title_book);
    scanf("%19s", b->author);
}

void read_arenda(arenda *a) {
    scanf("%d", &a->id_arenda);
    scanf("%10s", a->pasport_reader);
    scanf("%d", &a->id_book);
    scanf("%10s", a->date_give);
    scanf("%10s", a->date_return);
}

int main() {
    int n_readers, n_books, n_arendas;

    scanf("%d", &n_readers);
    reader readers[n_readers];
    for (int i = 0; i <= n_readers; ++i) {
        read_reader(&readers[i]);
    }

    scanf("%d", &n_books);
    book books[n_books];
    for (int i = 0; i <= n_books; ++i) {
        read_book(&books[i]);
    }

    scanf("%d", &n_arendas);
    arenda arendas[n_arendas];
    for (int i = 0; i <= n_arendas; ++i) {
        read_arenda(&arendas[i]);
    }
    int j = 0;
    int i = 0;
    printf("\n====Список аренд ====\n");
    for (int i = 0; i < n_arendas; i++) {
        char *r_surname = " ";
        char *r_name = " ";
        char *b_title = " ";

        for (int j = 0; j < n_readers; j++) {
            if (strcmp(arendas[i].pasport_reader, readers[j].pasport_reader) == 0) {
                r_surname = readers[j].surname_reader;
                r_name = readers[j].name_reader;
                break;
            }
        }

        for (int k = 0; k < n_books; k++) {
            if (arendas[i].id_book == books[k].id_book) {
                b_title = books[k].title_book;
                break;
            }
        }

        printf("Аренда #%d | Читатель: %s %s | Книга: \"%s\" | Выдана: %s | Возврат: %s\n",
               arendas[i].id_arenda, r_surname, r_name, b_title, 
               arendas[i].date_give, arendas[i].date_return);
    }

    return 0;
}
