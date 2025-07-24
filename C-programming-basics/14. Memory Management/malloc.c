#include <stdio.h>
#include <stdlib.h>

// malloc - memory allocation
// malloc()- Takes number of bytes to be allocated and returns a pointer of type void

int main() {
    // printf("%zu\n", sizeof(int));
    // printf("%zu\n", sizeof(float));
    // printf("%zu\n", sizeof(double));
    // printf("%zu", sizeof(char));
    int *ptr;
    ptr = malloc(5 * sizeof(int)); // malloc(size), calloc(amount, size)
    ptr[0] = 1;
    ptr[1] = 2;
    ptr[2] = 3;
    ptr[3] = 4;
    ptr[4] = 5;

    for (int i = 0; i < 5; i++) {
        printf("%d\n", ptr[i]);
    }

    return 0;
}