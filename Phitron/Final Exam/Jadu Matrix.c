#include <stdio.h>
#include <stdbool.h>

int main() {
    int N, M; // N = row, M = column
    scanf("%d %d", &N, &M);

    int matrix[N][M]; 
    for (int i = 0; i < N; i++) { // Row
        for (int j = 0; j < M; j++) { // Column
            scanf("%d", &matrix[i][j]);
        }
    }

    if (N != M) {
    printf("NO");
    return 0; // End the program
    }

    for (int i = 0; i < N; i++) { // Row
        for (int j = 0; j < M; j++) { // Column
                if ((i == j) && (matrix[i][j] != 1)){ // Check primary diagonal
                    printf("NO");
                    return 0; // End the program
                } else if ((i + j == N - 1) && (matrix[i][j] != 1)) {  // Check secondary diagonal
                    printf("NO");
                    return 0; // End the program
                } else if ((i != j) && (i + j != N - 1) && (matrix[i][j] != 0)) {
                    printf("NO");
                    return 0; // End the program
                }

        }
    }
    printf("YES");
    return 0;
}