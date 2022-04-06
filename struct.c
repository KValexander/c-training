#include <stdio.h>
#include <string.h>

// Структуры содержат данные
// Обязательно ; в конце структуры

// Структура Игрок
struct Player {
    char name[12];
    int score;
};
// Тут Player как новая структура
// По этому эту структуру необходим объявлять как struct Player name
// тк создаётся новая структура

// Структура Пользователь
typedef struct {
    char name[25];
    char password[12];
    int id;
} User;
// Тут User как алиас к структуре
// По этому эту структуру необходимо объявлать как User name
// тк User является алиасом к структуре и новой не создаётся

int main() {

    // Объявление структуры (struct)
    struct Player player1;

    // Обращение к полям структуры
    strcpy(player1.name, "MySQL");
    player1.score = 4;

    // Инициализация структуры (struct)
    struct Player player2 = {"NoSQL", 6};
    
    // Вывод полей структур
    printf("struct\n");
    printf("%s - %d\n", player1.name, player1.score);
    printf("%s - %d\n", player2.name, player2.score);

    // Инициализация структур (typedef struct)
    User user1 = {"MySQL", "root", 123456789};
    User user2 = {"NoSQL", "admin", 987654321};

    // Вывод полей структур
    printf("\ntypedef struct\n");
    printf("%s - %s - %d\n", user1.name, user1.password, user1.id);
    printf("%s - %s - %d", user2.name, user2.password, user2.id);
    
    return 0;
}