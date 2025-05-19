#include <stdio.h>

int main() {
    int array[] = {10, 20, 30, 40, 50}; // Integer size = 4 bits
    printf("%p\n", &array[0]);
    printf("%p\n", &array[1]);
    printf("%p\n", &array[2]);
    printf("%p\n", &array[3]);
    printf("%p\n", &array[4]);

    printf("Array name's memory location: %p\n", &array);
    printf("Value of array name's address: %d\n", *array); // Array's name stores in array[0] memory location
    *array = 5;
    for (int i = 0; i < 5; i++) {
        printf("%d " ,array[i]);
    }

    return 0;
}