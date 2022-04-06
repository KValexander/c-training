#include <stdio.h>
#include <string.h>

// Структура Студент
struct Student {
    char name[12];
    float gpa;
};


int main() {

    // Инициализация структур
    struct Student student1 = {"Shrek", 3.0};
    struct Student student2 = {"Donkey", 2.4};
    struct Student student3 = {"Fiona", 4.8};
    struct Student student4 = {"Dragon", 4.2};

    // Массив структур
    struct Student students[] = {student1, student2, student3, student4};

    int count = sizeof(students) / sizeof(students[0]);

    // Вывод данных из массива структур
    for (int i = 0; i < count; i++)
        printf ("%-12s - %.2f\n", students[i].name, students[i].gpa);


    return 0;
}