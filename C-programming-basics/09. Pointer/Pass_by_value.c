#include <stdio.h>

void func(int x) {
    printf("x = %d\n", x); // Before
    printf("Address of func function: %p\n", &x);
    x = 20;
    printf("x = %d\n", x); // After
    printf("Address of func function: %p\n", &x);
}

int main() {
    int a = 10;
    func(a); // Pass by value
    printf("a = %d\n", a);
    printf("Address of main function: %p\n", &a);
    return 0;
}