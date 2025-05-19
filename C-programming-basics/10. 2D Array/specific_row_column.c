#include <stdio.h>

int main() {
    int row, column;
    printf("Row: ");
    scanf("%d", &row);
    printf("Column: ");
    scanf("%d", &column);

    int array[row][column];

    // Input
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            scanf("%d", &array[i][j]);
        }
    }

    int specific_row;
    printf("Enter the row number: ");
    scanf("%d", &specific_row);

    for (int i = 0; i < column; i++) {
        printf("%d ", array[specific_row][i]);
    }

    printf("\n");

    int specific_column;
    printf("Enter the column number: ");
    scanf("%d", &specific_column);

    for (int i = 0; i < row; i++) {
        printf("%d ", array[i][specific_column]);
    }

    return 0;
} 