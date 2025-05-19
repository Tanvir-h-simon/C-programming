#include <stdio.h>

int main() {
    int n; // Number of lines

    printf("Enter the number of lines: ");
    scanf("%d", &n);

    printf("\n\n");

    // Loop for each line from 1 to n
    for (int p = 1; p <= n; p++) {
        // Print spaces to align numbers properly
        for (int q = 1; q <= (n - p); q++) {
            printf("     "); // Adjust spaces as needed for formatting
        }

        int m = p; // Starting number for this row

        // Print numbers in increasing order
        for (int q = 1; q <= p; q++) {
            printf("%5d", m++);
        }

        m -= 2; // Adjust m for the decreasing order

        // Print numbers in decreasing order
        for (int q = 1; q < p; q++) {
            printf("%5d", m--);
        }

        printf("\n"); // Move to the next line after each row
    }

    return 0;
}
