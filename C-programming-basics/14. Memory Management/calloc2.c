#include <stdio.h>
#include <stdlib.h>

int main() {
    // Allocate memory for 3 integers = 12 bytes, initialized to 0
    int *arr = calloc(3, sizeof(int)); 

    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Print values (all will be 0)
    printf("Values from calloc:\n");
    for (int i = 0; i < 3; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }

    free(arr); // Free the allocated memory
    return 0;
}