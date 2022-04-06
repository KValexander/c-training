#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    // Инициализация генератора псевдо случайных чисел
    // Без него работать не будет
    srand(time(0));

    // Генерация чисел от 1 до 10
    int number1 = rand() % 10 + 1;
    int number2 = rand() % 10 + 1;
    int number3 = rand() % 10 + 1;

    // Вывод сгенерированных чисел
    printf("%d - %d - %d\n",
    number1, number2, number3);

    return 0;
}