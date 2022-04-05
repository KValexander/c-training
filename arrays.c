#include <stdio.h>

int main() {

    // Первый вариант записи массива
    // int numbers[5];
    // numbers[0] = 5;
    // numbers[1] = 4;
    // numbers[2] = 3;
    // numbers[3] = 2;
    // numbers[4] = 1;

    // Второй вариант записи массива
    // Так же можно указать количество значений
    double prices[] = {5.0, 10.0, 15.0, 25.0, 20.0};

    // Длина массива вычисляется делением общего количества байт
    // массива на количество байт его элемента
    // Функция sizeof() возвращает количества байт передаваемого значения
    int count = sizeof(prices) / sizeof(prices[0]);

    // Цикл вывода данных массива
    for (int i = 0; i < count; i++)
        printf("$%.2lf\n", prices[i]);

    // Двумерные массивы (матрицы, сетки, таблицы)
    // Необходимо указывать количество значений

    // Первый вариант записи
    // int numbers[2][3] = {
    //     {1, 2, 3},
    //     {4, 5, 6}
    // };

    // Второй вариант записи
    int numbers[3][3];
    numbers[0][0] = 1;
    numbers[0][1] = 2;
    numbers[0][2] = 3;
    numbers[1][0] = 4;
    numbers[1][1] = 5;
    numbers[1][2] = 6;
    numbers[2][0] = 7;
    numbers[2][1] = 8;
    numbers[2][2] = 9;

    // Получение длины двумерного массива
    int rows = sizeof(numbers) / sizeof(numbers[0]);
    int columns = sizeof(numbers[0]) / sizeof(numbers[0][0]);
    printf("rows: %d; columns: %d\n", rows, columns);

    // Вывод двумерного массива
    for (int i = 0; i < rows; i++) {
        for(int j = 0; j < columns; j++)
            printf("%d ", numbers[i][j]);
        printf("\n");
    }

    return 0;
}