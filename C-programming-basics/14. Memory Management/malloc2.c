#include <stdio.h>
#include <stdlib.h>

int main() {
    // Allocate memory for 3 integers = 12 bytes
    int *arr = malloc(3 * sizeof(int)); 

    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Assign values
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;

    // Print values
    printf("Values from malloc:\n");
    for (int i = 0; i < 3; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }

    free(arr); // Free the allocated memory
    return 0;
}