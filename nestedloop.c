#include <stdio.h>

int main() {

    int rows;
    int columns;
    char symbol;

    printf("\nEnter rows: ");
    scanf("%d", &rows);

    printf("\nEnter columns: ");
    scanf("%d", &columns);
    // Почему 10?

    scanf("%c");

    printf("\nEnter char: ");
    scanf("%c", &symbol);

    // Почему 10?
    printf("%d, %d, %c", rows, columns, symbol);

    for(int i = 1; i <= rows; i++) {
        printf("\n%d.", i);
        for(int j = 1; j <= columns; j++)
        {
            printf("%c", symbol);
        }
    }

    return 0;

}