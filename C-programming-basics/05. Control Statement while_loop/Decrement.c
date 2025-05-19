#include <stdio.h>

int main() {
    int countdown;

    printf("Enter the starting number for countdown: ");
    scanf("%d", &countdown);

    while (countdown > 0) {
        printf("%d\n", countdown);
        countdown--;
    }

    printf("Happy new year!\n");

    return 0;
}
