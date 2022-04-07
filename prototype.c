#include <stdio.h>

// Прототип функции позволяет создавать
// функции ниже её непосредственного вызова
// Примерно

// Прототип функции
void hello(char[], int);

int main() {

    char name[] = "Alexander";
    int age = 19;

    hello(name, age);

    return 0;
}

// Сама функция
void hello(char name[], int age) {
    printf("Hello %s\n", name);
    printf("You are %d years old\n", age);
}