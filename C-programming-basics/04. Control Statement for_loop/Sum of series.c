// Write a program to find the sum of the series: 1 + 1/2 + 1/3 + ... + 1/N.
#include <stdio.h>

int main() {
    int N;
    double sum = 0.0;

    // Prompt user to enter the value of N
    printf("Enter the value of N: ");
    scanf("%d", &N);

    // Calculate the sum of the series
    for (int i = 1; i <= N; i++) {
        sum += 1.0 / i;
    }

    // Display the result
    printf("The sum of the series is: %.2lf\n", sum);

    return 0;
}
