#include <stdio.h>

int main() {
    int number_of_rows;
    printf("Enter the number of lines/rows: ");
    scanf("%d", &number_of_rows);
    for (int i  = 1; i <= number_of_rows; i++) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    // for (int i = number_of_rows; i >= 1; i--) {
    //     for (int j = 1; j <= i; j++) {
    //         printf("*");
    //     }
    //     printf("\n");
    // }

    for (int i = number_of_rows - 1; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}