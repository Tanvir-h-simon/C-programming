#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    int array[N];
    
    for (int i = 0; i < N; i++) {
        scanf("%d", &array[i]);
    } 
    
    for (int i = N - 1; i >= 0; i--) {
        if (i % 2 == 1) {  // Only print odd indices in reverse
            printf("%d ", array[i]);
        }
    }
    return 0;
}