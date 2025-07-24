#include <stdio.h>

void func(int *p) {
    *p = 20;
    
}

int main() {
    int x = 20;
    func(&x); // Pass by reference
    printf("%d\n", x);
    return 0;
}