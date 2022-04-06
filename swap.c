#include <stdio.h>
#include <string.h>

int main() {

    // Замена значений двух строковых переменных
    // char x[] = "water";
    // char y[] = "soda";
    char x[15] = "water";
    char y[15] = "soda";
    char temp[15];

    // Сама замена
    strcpy(temp, x); // в temp записываем x
    strcpy(x, y); // в x записываем y
    strcpy(y, temp); // в y записываем temp

    printf("x = %s\n", x);
    printf("y = %s\n", y);
    printf("temp = %s\n", temp);

    return 0;
}