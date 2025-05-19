#include <stdio.h>

int main() {
    int number;
    scanf("%d", &number);
    for (int i = 1; i <= number; i++) {
        if ((i % 3 == 0) && (i % 7 == 0)) {
            printf("%d\n", i);
        }
    }
    return 0;
}