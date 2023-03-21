#include <stdio.h>

int main() {
    int array[5][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}, {17, 18, 19, 20}};
    int row_arrays[5][4] = {0};
    int column_arrays[4][5] = {0};
    
    // заполнение одномерных массивов по строкам
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 4; j++) {
            row_arrays[i][j] = array[i][0];
        }
    }
    
    // заполнение одномерных массивов по колонкам
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 5; j++) {
            column_arrays[i][j] = array[0][i];
        }
    }
    
    // вывод массивов
    printf("row arrays:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d ", row_arrays[i][j]);
        }
        printf("\n");
    }
    
    printf("\ncolumn arrays:\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", column_arrays[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
