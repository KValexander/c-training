#include <stdio.h>

int main() {

    int age;

    printf("Введите свой возраст: ");
    scanf("%d", &age);
    
    if (age >= 18) {
        printf("Вы совершеннолетний");
    }
    else if(age < 0) {
        printf("Вы ещё не родились");
    }
    else {
        printf("Вы не совершеннолетний");
    }

    return 0;
}