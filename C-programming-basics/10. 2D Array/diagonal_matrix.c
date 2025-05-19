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

     if (row != column) {
        printf("This is not a square matrix.");
        return 0; // If not square, it's not a diagonal matrix
    }

    bool is_diagonal_matrix = true;

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            if (i != j && array[i][j] != 0) { // A diagonal matrix is square and every off-diagonal element equals 0.
                is_diagonal_matrix = false;
                break;
            }
        }
    }

    if (is_diagonal_matrix) {
        printf("The matrix is a diagonal matrix.");
    } else {
        printf("The matrix is not a diagonal matrix.");
    }

    return 0;
}