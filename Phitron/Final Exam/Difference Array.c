#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int T; // T = Test Case
    scanf("%d", &T);

    while (T--) {
        int N;
        scanf("%d", &N);
        int A[N];
        for (int i = 0; i < N; i++) {
            scanf("%d", &A[i]);
        }

        int B[N];
        for (int i = 0; i < N; i++) {
            B[i] = A[i]; // Copy Array A
        }

        // Sorting the B array in ascending order
        for (int i = 0; i < N - 1; i++) { 
            for (int j = i + 1; j < N ; j++) {
                if (B[i] > B[j]) {
                int temp = B[i];
                B[i] = B[j];
                B[j] = temp;
                }
            }
        }

        // // Print the Array B
        // for (int i = 0; i < N; i++) {
        //     printf("%d ", B[i]);
        // }

        // printf("\n");

        int C[N];
        for (int i = 0; i < N; i++) {
            C[i] = abs(A[i] - B[i]); // Absolute value
        }

        // Print the Array C
        for (int i = 0; i < N; i++) {
            printf("%d ", C[i]);
        }
        printf("\n");
    }
    return 0;
}