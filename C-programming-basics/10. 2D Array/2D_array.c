#include <stdio.h>

int main() {
    int row, column;
    printf("Row: ");
    scanf("%d", &row);
    printf("Column: ");
    scanf("%d", &column);

    // int array[3][4]; // array[row][column]
    // int array[0][1] = 5;

    int array[row][column];

    // Input
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            scanf("%d", &array[i][j]);
        }
    }

    printf("\n");
    
    // Output
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }
    return 0;
}