#include <stdio.h>

void mello() {
    printf("Mello\n");
}

void gello() {
    printf("Gello\n");
    mello();
}

void hello() {
    printf("Hello\n");
    gello();
}

int main() {
    printf("Hi\n");
    hello();
    return 0;
}

// void hello() {
//     printf("Hello\n");
//     hello(); // Recursive function 
//     // Statck Overflow
// }

// int main() {
//     printf("Hi\n");
//     hello();
//     return 0;
// }