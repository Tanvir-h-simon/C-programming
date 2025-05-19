#include <stdio.h>
int main()
{
    // Declare two 2x2 matrices and a result matrix
    int matrix1[2][2], matrix2[2][2], sum[2][2];

    // Prompt user to enter the elements of the first matrix
    printf("Enter the elements of the first 2x2 matrix: \n");
    for (int i=0; i<2; i++){
              for(int j=0; j<2; j++){
          printf("Element [%d][%d]: ", i, j);
          scanf("%d", &matrix1[i][j]);
      }
    }
    // Prompt user to enter the elements of the second matrix
    printf("Enter the elements of the second 2x2 matrix: \n");
    for (int i=0; i<2; i++){
        for (int j=0; j<2; j++){
            printf("Elements [%d][%d]: ", i, j);
            scanf("%d", &matrix2[i][j]);
        }
    }
    // Perform the addition of the two matrices
    for (int i=0; i<2; i++) {
        for (int j=0; j<2; j++) {
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
    // Display the sum of the matrices
    printf("Sum of the two 2x2 matrices: \n");
    for (int i=0; i<2; i++) {
        for (int j=0; j<2; j++) {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}
