#include <stdio.h>

int main() {
    int x = 10;
    printf("%d\n", x);
    printf("%p\n", &x); // Print the memory adress of the variable in hexadecimal

    int* ptr = &x;
    printf("%p\n", ptr);
    printf("%p\n", &ptr);

    printf("%d\n", *ptr); // Dereferencing a pointer

    *ptr = 20;
    printf("%d\n", *ptr); // Dereferencing a pointer
    return 0;
}