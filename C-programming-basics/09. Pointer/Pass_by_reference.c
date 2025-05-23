#include <stdio.h>

void func(int *x) {
    printf("x = %d\n", *x); // Before
    printf("Address of x points to: %p\n", (void*)x);
    printf("Address of x pointer variable: %p\n", (void*)&x); 
    *x = 20;
    printf("x = %d\n", *x); // After
    printf("Address of x points to: %p\n", (void*)x);
    printf("Address of x pointer variable: %p\n", (void*)&x); 
}

int main() {
    int a = 10;
    func(&a); // Pass by reference
    printf("a = %d\n", a);
    printf("Address of a: %p\n", &a);
    return 0;
}