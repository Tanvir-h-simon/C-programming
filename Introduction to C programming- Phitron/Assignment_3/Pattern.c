#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    // Upper part of the patterns
    for (int i = 0; i < N; i++) { // Number of rows
        for (int j = 0; j < (N - 1) - i; j++) { // Print leading Spaces
            printf(" ");
        } 
        for (int k = 0; k < (2 * i) + 1; k++) { // Print symbols
            if (i % 2 == 0) {
                printf("#");
            } 
            if (i % 2 == 1) {
                printf("-");
            }
        }
        printf("\n"); // Move to a new line
    }

    // Lower part of the patterns
    for (int  i = N - 1 ; i > 0; i--) { // Number of rows
        for (int j = N - i; j > 0 ; j--) { // Print Leading Spaces
            printf(" ");
        }
        for (int k = (2 * i) - 1; k > 0; k--) { // 
            if (i % 2 == 1) {
                printf("#");
            } 
            if (i % 2 == 0) {
                printf("-");
            }
        }
        printf("\n"); // Move to a new line
    }
    return 0;
}