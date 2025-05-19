#include <stdio.h>

int main() {
    int number_of_rows;
    printf("Enter the number of lines/rows: ");
    scanf("%d", &number_of_rows);
    // for (int i = 1; i <= number_of_rows; i++) { // Rows
    //     for (int j = number_of_rows; j > i; j--) { // Spaces
    //         printf(" ");
    //     } for (int j = 1; j <= (2 * i - 1); j++) { // Stars
    //         printf("*");
    //     }
    //     printf("\n");
    // }

    int star_count = 1;
    for (int i  = 1; i <=number_of_rows; i++) { // Rows
        for (int j = number_of_rows; j > i; j--) { // Spaces
            printf(" ");
        } for (int j = 1; j <= star_count; j++) { // Stars
            printf("*");
        }
        printf("\n");
        star_count += 2;
    }
    return 0;
}