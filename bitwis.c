#include <stdio.h>

int main() {

    // Битовые операторы
    // & - И (AND)
    // | - ИЛИ (OR)
    // ^ - ИСКЛЮЯАЮЩЕЕ ИЛИ (XOR)
    // ~ - ОТРИЦАНИЕ (NOT)
    // << - сдвиг влево
    // >> - сдвиг вправо


    int x = 6;  // 6  = 00000110
    int y = 12; // 12 = 00001100
    int z = 0;  // 0  = 00000000

    // Битовый оператор И
    z = x & y;
    printf("AND = %d\n", z);

    // Битовый оператор ИЛИ
    z = x | y;
    printf("OR = %d\n", z);

    // Битовый оператор ИСКЛЮЧАЮЩЕЕ ИЛИ
    z = x ^ y;
    printf("XOR = %d\n", z);

    // Битовый оператор сдвиг влево
    z = x << y; // почему-то корректно не работает
    printf("SHIFT LEFT = %d\n", z);

    // Битовый оператор сдвиг вправо
    z = x >> y;// почему-то корректно не работает
    printf("SHIFT RIGHT = %d\n", z);


    return 0;
}