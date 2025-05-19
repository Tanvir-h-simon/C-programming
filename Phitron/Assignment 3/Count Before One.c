#include <stdio.h>

int count_before_one(int array_size, int array[]);

int main() {
    int N;
    scanf("%d", &N);

    int A[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &A[i]);
    }
    int result = count_before_one(N, A); // Call the function with array size and array input, and stores the value in result
    printf("%d", result); 

    return 0;
} 

int count_before_one(int array_size, int array[]) {
    int count = 0;
    for (int i = 0; i < array_size; i++) {
        if (array[i] == 1) {
            break;
        }
        count++;
    }
    return count;
}