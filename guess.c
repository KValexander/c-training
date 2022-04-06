#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    // Игра Угадай число

    // Константы минимального и максимального числа
    const int MIN = 1;
    const int MAX = 100;

    int guess; // число
    int guesses; // количество попыток
    int answer; // ответ

    // Если не инициализирую, то выводит некорректное число
    guesses = 0;

    // Инициализация рандома
    srand(time(0));

    // Генерация правильного ответа
    answer = (rand() % MAX) + MIN;
    // printf("%d", answer);

    // До тех пор пока число не совпадает с ответом
    // игра не остановиться
    do {
        printf("Enter a guess: ");
        scanf("%d", &guess);

        // Проверки числа
        if (guess > answer)
            printf("Too hight!\n");
        else if (guess < answer)
            printf("Too low!\n");
        else printf("CORRECT!\n");
        
        // Увеличение счётчика количества попыток
        guesses++;
    } while (guess != answer);

    // Вывод результатов
    printf("\n**********\n");
    printf("answer: %d\n", answer);
    printf("guesses: %d\n", guesses);
    printf("**********\n\n");


    return 0;
}
