#include <stdio.h>

int main() {
    int i = 0; // start with the first even number

    while (i <= 20) {
        printf("%d\n", i); // Print current value of i
        i += 2; // Increment i by 2 for the next even number
    }
    return 0;
}

/*
#include <stdio.h>

int main() {
    int i = 1; // Start with the first odd number

    while (i <= 20) {
        printf("%d\n", i); // Print current value of i
        i += 2; // Increment i by 2 to get the next odd number
    }
    return 0;
}
*/
