#include <stdio.h>

int main() {

    // Работа с файлами
    // r - чтение файла, файл должен существовать
    // w - открыть пустой файл для записи, если файл существует
    // содержимое теряется
    // a - открыть файл для записи в конец, файл создаётся
    // если не существует
    // r+ - открыть файл для чтения и записи, файл должен существовать
    // w+ - открыть пустой файл для чтения и записи, если файл
    // существует, то его содержимое теряется
    // a+ - открыть файл для чтения и дополнения, файл создаётся
    // если не существует

    // Функция fopen возвращает указатель
    FILE *pF = fopen("daffodils.txt", "w+");

    // Запись данных в файл
    fprintf(pF, "I wandered lonely as a cloud\n");
    fprintf(pF, "That floats on high o'er vales and hills\n");
    fprintf(pF, "When all at once I saw a crowd\n");
    fprintf(pF, "A host, of golden daffodils\n");
    fprintf(pF, "Beside the lake, beneath the trees\n");
    fprintf(pF, "Fluttering and dancing in the breeze\n");

    // Закрытие работы с файлом
    fclose(pF);

    // Удаление файла
    // if(remove("test.txt") == 0)
    //     printf("That file was deleted successfully");
    // else printf("That file was NOT deleted!");

    return 0;
}