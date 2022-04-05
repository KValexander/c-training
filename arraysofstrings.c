#include <stdio.h>
#include <string.h>

int main() {
    // Массивы строк
    char cars[][10] = {"Mustang", "Corvetto", "Camaro"};
    
    // Перезапись значений массива
    // cars[0] = "Tesla"; // такой вариант записи работать не будет
    strcpy(cars[0], "Tesla"); // для массива строк используют функцию strcpy(array, value)

    int count = sizeof(cars) / sizeof(cars[0]);

    for (int i = 0; i < count; i++)
        printf("%s\n", cars[i]);

    return 0;
}