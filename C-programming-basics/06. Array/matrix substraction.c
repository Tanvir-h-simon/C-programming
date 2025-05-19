#include <stdio.h>

int main() {
    // Declare two 2x2 matrices and a result matrix for subtraction
    int matrix1[2][2], matrix2[2][2], subtraction[2][2];

    // Prompt user to enter the elements of the first matrix
    printf("Enter the elements of the first 2x2 matrix:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix1[i][j]);
        }
    }

    // Prompt user to enter the elements of the second matrix
    printf("Enter the elements of the second 2x2 matrix:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix2[i][j]);
        }
    }

    // Perform the subtraction of the two matrices
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            subtraction[i][j] = matrix1[i][j] - matrix2[i][j];
        }
    }

    // Display the subtraction of the matrices
    printf("Subtraction of the two 2x2 matrices:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", subtraction[i][j]);
        }
        printf("\n");
    }

    return 0;
}
