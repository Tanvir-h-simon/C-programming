#include <stdio.h>

int main() {
    int N, M;
    scanf("%d %d", &N, &M); // N = row, M = column

    int matrix[N][M]; 
    for (int i = 0; i < N; i++) { // Row
        for (int j = 0; j < M; j++) { // Column
            scanf("%d", &matrix[i][j]);
        }
    }

    for (int j = 0; j < M; j++) { // Row
            printf("%d ", matrix[N-1][j]); // Print last row
    }

    printf("\n");
    
        for (int i = 0; i < N; i++) { // Row
            printf("%d ", matrix[i][M - 1]); // Print last column
    }

    return 0;
}