#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    
    for (int i = 1; i <= N; i++) { // Number of rows
        for (int j = 0; j < N - i; j++) { // Print leading Spaces
            printf(" ");
        }
        // for (int k = 1; k <= i; k++) {
        //     printf("%d", k);
        // }
        for (int k = i; k > 0; k--) { // Print the numbers
        printf("%d", k);
        }
        printf("\n");
    }
    return 0;
}