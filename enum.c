#include <stdio.h>

// Enum - числовые константы
enum Day{Sun = 1, Mon = 2, Tue = 3, Wed = 4, Thu = 5, Fri = 6, Sat = 7};

int main() {

    // Инициализация(объявление?) enum
    enum Day today = Mon;
    // в today получаю значение Mon - 2

    // printf("%d", today); // Enum исключительно числа

    if(today == Sun || today == Sat)
        printf("It's the weekend!");
    else printf("It's work time!");

    return 0;
}