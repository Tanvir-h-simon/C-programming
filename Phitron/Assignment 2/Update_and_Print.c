#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    int A[N];
    for (int i = 0; i < N; i++) { // Initialize the array by user input
        scanf("%d", &A[i]);
    }
    int X, V;
    scanf("%d %d", &X, &V);

    A[X] = V; // Update the Xth element with V

    for (int i = N - 1; i >= 0; i--) { // Print the array in reverse order
        printf("%d ", A[i]);  
    }
    return 0;
}