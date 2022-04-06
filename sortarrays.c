#include <stdio.h>

// Функция сортировки (пузырьковая)
// void sort(int array[], int count) {
void sort(char array[], int count) {
    for (int i = 0; i < count - 1; i++) {
        for (int j = 0; j < count - i - 1; j++) {
            if (array[j] > array[j+1]) {
            // if (array[j] < array[j+1]) {
                int temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
}

// Функция вывода массива
// void printArray(int array[], int count) {
void printArray(char array[], int count) {
    for (int i = 0; i < count; i++)
        // printf("%d ", array[i]);
        printf("%c ", array[i]);
}

int main() {

    // int array[] = {9,2,4,1,6,3,5,8,7};
    char array[] = {'B', 'D', 'A', 'F', 'C', 'E'};
    int count = sizeof(array) / sizeof(array[0]);

    sort(array, count);
    printArray(array, count);

    return 0;
}