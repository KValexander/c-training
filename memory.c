#include <stdio.h>

int main() {

    // Количество байт в единице типа
    char a = 'A'; // 1 байт
    short b = 1; // 2 байт
    int c = 2; // 4 байт
    double d = 3.0; // 8 байт

    // Количество байт в массивах
    // единица типа * количество элементов
    // char a_array[6] = "ABC"; // 6 байт
    // char a_array[] = "ABC"; // 4 байт
    char a_array[3] = "ABC"; // 3 байт
    // short b_array[4] = {1, 2, 4}; // 8 байт
    short b_array[] = {1, 2, 3}; // 6 байт
    // int c_array[4] = {1, 2, 3}; // 16 байт
    int c_array[] = {1, 2, 3}; // 12 байт
    // double d_array[4] = {1.0, 2.0, 3.0}; // 32 байт
    double d_array[] = {1.0, 2.0, 3.0}; // 24 байт

    // Количества байт переменных
    printf("Variables:\n");
    printf("%d bytes\n", sizeof(a));
    printf("%d bytes\n", sizeof(b));
    printf("%d bytes\n", sizeof(c));
    printf("%d bytes\n", sizeof(d));

    // Количество байт массивов
    printf("Arrays:\n");
    printf("%d bytes\n", sizeof(a_array));
    printf("%d bytes\n", sizeof(b_array));
    printf("%d bytes\n", sizeof(c_array));
    printf("%d bytes\n", sizeof(d_array));

    // Указатели переменных
    printf("%p\n", &a);
    printf("%p\n", &b);
    printf("%p\n", &c);
    printf("%p\n", &d);

    // Указатели массивов
    printf("%p\n", &a_array);
    printf("%p\n", &b_array);
    printf("%p\n", &c_array);
    printf("%p\n", &d_array);

    return 0;
}