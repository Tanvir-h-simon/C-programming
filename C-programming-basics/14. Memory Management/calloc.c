#include <stdio.h>
#include <stdlib.h>

// calloc - continuous allocation
// calloc()- 
/* The calloc() function has two parameters:
    amount - Specifies the amount of items to allocate
    size - Specifies the size of each item measured in bytes
*/

int main() {
    float *ptr;
    ptr = calloc(5, sizeof(float));

    for (int i = 0; i < 5; i++) {
        printf("%f\n", ptr[i]);
    }
    return 0;
}