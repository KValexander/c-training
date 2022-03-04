#include <stdio.h>
#include <string.h>

int main() {

    char name[25];
    int age;

    printf("Как тебя зовут?: ");
    // Продвинутая функция ввода данных
    fgets(name, 25, stdin);
    // strlen функция получения длины массива, string.h
    name[strlen(name)-1] = '\0';
    
    printf("Сколько тебе лет?: ");
    // Функция ввода данных
    scanf("%d", &age);

    printf("Вас зовут %s и вам %d лет", name, age);

    return 0;

}