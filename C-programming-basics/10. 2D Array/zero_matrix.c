#include <stdio.h>
#include <stdbool.h>

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

    bool is_zero_matrix = true;

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            if (array[i][j] != 0) {
                is_zero_matrix = false;
                printf("This is not a zero matrix.");
                break;
            }
        }
    }

    if (is_zero_matrix) {
        printf("This is a zero matrix.");
    }

    return 0;
}