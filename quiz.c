#include <stdio.h>
#include <ctype.h>

int main() {

    // Тут тоже были какие-то проблемы с gcc 6.1
    // На gcc 11.2 уже другие проблемы

    // Вопросы
    char questions[][100] = {
        "1. What your first name?: ",
        "2. What your second name?: ",
        "3. How old are you?: "
    };

    // Варианты ответов
    char options[][100] = {
        "A. Alexander", "B. Noname", "C. Firstname", "D. Secondname",
        "A. Kurchatov", "B. Secondname", "C. Nosecondname", "D. Firstname",
        "A. 23", "B. 12", "C. 98", "D. 21"
    };

    // Правильные ответы
    char answer[3] = {'C', 'B', 'D'};
    // Количество вопросов
    int count = sizeof(questions) / sizeof(questions[0]);

    char guess; // Ответ
    // Почему если я не объявлю 0, то запись чисел будет вестись некорректно?
    // Проблема gcc 6.1
    // В gcc 11.2 можно не объявлять
    int score; // Количество очков

    printf("QUIZ GAME\n");
    
    for (int i = 0; i < count; i++) {
        printf("%s\n", questions[i]);
        printf("******************\n");

        for (int j = (i * 4); j < (i * 4) + 4; j++)
            printf("%s\n", options[j]);

        printf("Guess: ");
        // Почему оно записывает второй символ? gcc 6.1
        // Почему он пропускает второй выбор? gcc 11.2
        scanf("%c", &guess);
        scanf("%c"); // Очистка \n из буффера

        // Поднять в верхний регистр
        guess = toupper(guess);

        printf("%c - %c\n", guess, answer[i]);

        if (guess == answer[i]) {
            printf("CORRECT!\n");
            score++;
        } else printf("WRONG!\n");

        printf("\n");
    }

    printf("FINAL SCORE: %d/%d\n", score, count);

    return 0;

}