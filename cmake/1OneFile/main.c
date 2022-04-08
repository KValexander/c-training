#include <stdio.h>

// Компиляция через cmd
// gcc main.c -o main
// (компилятор) (названия .c файлов) (метка) (название exe файла)

// Прототип функции
void printText(char text[]);

int main() {

    // Вызов функции
    printText("Hello world");

    return 0;
}

// Сама функция
void printText(char text[]) {
    printf("%s", text);
}