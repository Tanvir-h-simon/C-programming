#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr1, *ptr2, size;
    
    // Allocate memory for three integers
    size = 3 * sizeof(*ptr1);
    ptr1 = malloc(size);
    
    if (ptr1 == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("%d bytes allocated at address %p \n", size, ptr1);
    
    // Initialize first three integers with values 10, 20, 30
    for (int i = 0; i < 3; i++) {
        ptr1[i] = (i + 1) * 10;
    }
    

    printf("Initial values: ");
    for (int i = 0; i < 4; i++) {
        printf("%d ", ptr1[i]);
    }
    printf("\n");
    
    // Resize the memory to hold five integers
    size = 5 * sizeof(*ptr1);
    ptr2 = realloc(ptr1, size);
    
    if (ptr2 == NULL) {
        printf("Memory reallocation failed!\n");
        free(ptr1);
        return 1;
    }
    
    printf("%d bytes reallocated at address %p\n", size, ptr2); // Same memory address
    
    // Initialize the two new integers with values 40, 50
    ptr2[3] = 40;
    ptr2[4] = 50;

    printf("All values after reallocation: ");
    for (int i = 0; i < 6; i++) {
        printf("%d ", ptr2[i]);
    }
    printf("\n");
    
    // Free the allocated memory
    free(ptr2);
    
    return 0;
}