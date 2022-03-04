#include <stdio.h>

int main() {

    // Константа
    const float PI = 3.14159;

    // Целое число
    int x;
    x = 128;
    int y = 256;

    // Число с плавающей точкой
    float decent = 12.222;

    // Символ
    char color = 'C';

    // Строка
    char colors[] = "Values";

    // Вывод переменных в консоль
    // %d - целое число
    // %f - число с плавающей точкой
    // %c - символ
    // %s - строка
    printf("Целое число: %d, %d\n", x, y);
    printf("Число с плавающей точкой: %f\n", decent);
    printf("Символ: %c\n", color);
    printf("Строка: %s\n", colors);

    return 0;
}