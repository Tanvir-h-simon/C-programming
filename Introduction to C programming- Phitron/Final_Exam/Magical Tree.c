#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    // Upper part of the pattern
    int rows = (N - 1) / 2 + 6;
    for (int i = 0; i < rows; i++) { // Row  
        for (int j = 0; j < (N - 1) / 2 + 5 - i; j++) { // Print leading spaces
            printf(" ");
        }
        for (int k = 0; k < 2 * i + 1; k++) {
            printf("*");
        }
        printf("\n");
    }

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) { // Print spaces
            printf(" ");
        }
        for (int k = 0; k < N; k++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}