#include <stdio.h>

int main() {

    char grade;

    printf("\nВведите буквенную оценку: ");
    scanf("%c", &grade);

    switch(grade) {
        case 'A': printf("Отлично!"); break;
        case 'B': printf("Хорошо!"); break;
        case 'C': printf("Неплохо!"); break;
        case 'D': printf("Нормально!"); break;
        case 'E': printf("Плохо!"); break;
        case 'F': printf("Очень плохо!"); break;
        default: printf("Введено не корректное значение!"); break;
    }

    return 0;
}