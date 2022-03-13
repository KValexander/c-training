#include <stdio.h>
#include <string.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "UTF-8");

    // Цикл for
    // for(int i = 0; i < 10; i++) {
    for(int i = 1; i <= 10; i++) {
        printf("for: %d\n", i);
    }

    // Цикл while
    char name[25];
    
    printf("Ваше имя:"); 
    fgets(name, 25, stdin);
    name[strlen(name) - 1] = '\0';

    // И что это за пример?
    while(strlen(name) == 0) {
        printf("Это бесконечно бро, ищи выход: ");
        fgets(name, 25, stdin);
        name[strlen(name) - 1] = '\0';
    }

    printf("Хорош %s\n", name);

    // Цикл do while
    int number = 0;
    int sum = 0;

    do {
        printf("Введите число больше 0: ");
        scanf("%d", &number);
        if(number > 0) {
            sum += number;
        }
    } while (number > 0);

    printf("Сумма: %d", sum);

    return 0;
}