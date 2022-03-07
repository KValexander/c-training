#include <stdio.h>

void character(char name[], int age) {
    printf("\nВас зовут %s, ваш возраст %d\n", name, age);
}

double square(double x) {
    double result = x * x;
    return result;
}

int main() {
    char name[] = "Name";
    int age = 12;

    character(name, age);

    double x = square(3.14);
    printf("%lf", x);

    return 0;
}