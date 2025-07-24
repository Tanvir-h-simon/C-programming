#include <stdio.h>

void func(int x) {
    x = 20;
    printf("Address of func function: %p\n", &x);
}

int main() {
    int x = 10;
    func(x); // Pass by value
    printf("%d\n", x);
    printf("Address of main function: %p\n", &x);
    return 0;
}