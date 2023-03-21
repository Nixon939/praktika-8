#include <stdio.h>

int main() {
    int arr1[12] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    int arr2[3][4];

    // заполнение построчно
    int k = 0;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            arr2[i][j] = arr1[k++];
        }
    }

    // вывод массива arr2
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d ", arr2[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    // заполнение по колонкам
    k = 0;
    for (int j = 0; j < 4; j++) {
        for (int i = 0; i < 3; i++) {
            arr2[i][j] = arr1[k++];
        }
    }

    // вывод массива arr2
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d ", arr2[i][j]);
        }
        printf("\n");
    }

    return 0;
}