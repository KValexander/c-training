#include <stdio.h>

int main() {

    int rows;
    int columns;
    char symbol;

    printf("\nEnter rows: ");
    scanf("%d", &rows);

    printf("\nEnter columns: ");
    scanf("%d", &columns);

    scanf("%c");

    printf("\nEnter char: ");
    scanf("%c", &symbol);

    // На версии gcc 6.1 для columns выдавало 10
    // На версии gcc 11.2 всё корректно работает
    printf("%d, %d, %c", rows, columns, symbol);

    for(int i = 1; i <= rows; i++) {
        printf("\n%d. ", i);
        for(int j = 1; j <= columns; j++)
        {
            printf("%c", symbol);
        }
    }

    return 0;

}