#include <stdio.h>
#include <string.h>

int main () {
    char string1[] = "Alex";
    char string2[] = "Ander";

    // Опустить регистр
    // strlwr(string1);
    // Поднять регистра
    // strupr(string1);
    // Добавить второе в конец первого
    // strcat(string1, string2);
    // Добавить n символов в конец первого
    // strncat(string1, string2, 1);
    // Копировать второе в первое
    // strcpy(string1, string2);
    // Копировать n символов в первое
    // strncpy(string1, string2, 1);

    // Заменить символы
    // strset(string1, '?');
    // Заменить n символ
    // strnset(string1, 'x', 1);
    // Обратить символы
    // strrev(string1);

    // printf("%s", string1);

    // Измерить длину строки
    // int result = strlen(string1);
    // Сравнение всех символов
    // int result = strcmp(string1, string2);
    // Сравнение n символа
    // int result = strncmp(string1, string2, 1);
    // Сравнение всех символов без учёта регистра
    // int result = strcmpi(string1, string1);
    // Сравнение n символа без учёта регистра
    int result = strnicmp(string1, string1, 1);
    
    printf("%d", result);

    result == 0 ? printf("\nfalse") : printf("\ntrue");;

    return 0;
}