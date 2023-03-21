#include <stdio.h>

int main() {
    int array[3][5]; // двумерный массив
    int array1[5] = {1, 2, 3, 4, 5}; // первый одномерный массив
    int array2[5] = {6, 7, 8, 9, 10}; // второй одномерный массив
    int array3[5] = {11, 12, 13, 14, 15}; // третий одномерный массив

    // заполнение двумерного массива элементами одномерных массивов
    for (int i = 0; i < 5; i++) {
        array[0][i] = array1[i];
        array[1][i] = array2[i];
        array[2][i] = array3[i];
    }

    // вывод двумерного массива
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", array[i][j]);
        }
        printf("\n\n");
    }

    return 0;
}