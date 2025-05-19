#include <stdio.h>

int main() {
    int counter;

    printf("Even numbers:\n");
    for (counter = 1; counter <= 50; counter++) {
        if (counter % 2 != 0)
            continue;
        printf("%d ", counter);
    }
    printf("\n\n");

    printf("Odd numbers:\n");
    counter = 1; // Start with the first odd number
    while (counter <= 50) {
        printf("%d ", counter);
        counter += 2; // Increment by 2 to get the next odd number
    }
    printf("\n");

    return 0;
}
